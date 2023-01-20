#include <stdio.h>
#include "mpi.h"
#include "Exercise2_dll.h"
#include <iostream>
using namespace std;

// Функция выделения памяти под вектор
double* malloc_array(int n)
{
	double* a = new double[n];
	return a;
}

// Функция освобождения памяти 
int free_array(double*a, int n)
{
	delete[] a;
	return 0;
}

int multmv(int n, double* A_glob, double* x, double* y)
{
#if 1
	// Определения числа доступных процессов
	int myid, numprocs;
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);

	// Размер доли
	int chunk_size = n / numprocs;

	// Инициализация дополнительной матрицы
	double *submatrix = malloc_array(n*chunk_size);

	// Широковещательный вектор
	MPI_Bcast(x, n, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	MPI_Barrier(MPI_COMM_WORLD);
	//if (myid == 2) { for (int i = 0; i < n; i++) cout << " x[" << i << "] = " << x[i] << "!" << endl; }

	// Разбитие исходной матрицы
	MPI_Scatter(A_glob, (n*chunk_size), MPI_DOUBLE, submatrix, (n*chunk_size), MPI_DOUBLE, 0, MPI_COMM_WORLD);
	MPI_Barrier(MPI_COMM_WORLD);
	//if (myid == 0) { for (int i = 0; i < n*n; i++) cout << " A_glob[" << i << "] = " << A_glob[i] << "!" << endl; }
	//if (myid == 3) { for (int i = 0; i < n*chunk_size; i++) cout << " A_glob[" << i << "] = " << A_glob[i] << "!" << endl; }

	//cout << submatrix[0] << endl;
	//cout << submatrix[1] << endl;
	//cout << submatrix[2] << endl;
	//cout << submatrix[3] << endl;

	//Calculating...
		for (int k = 0; k < 100; k++)
		{
			for (int i = 0; i < chunk_size; i++)
			{
				y[i] = 0.0;
				for (int j = 0; j < n; j++) {
					y[i] += (submatrix[(i*n) + j] * x[j]);
				}
			}

			//for (int i = 0; i < chunk_size; i++) cout << myid << " y[" << i << "] = " << y[i] << "!" << endl;
			MPI_Allgather(y, chunk_size, MPI_DOUBLE, x, chunk_size, MPI_DOUBLE, MPI_COMM_WORLD);
			MPI_Allgather(y, chunk_size, MPI_DOUBLE, y, chunk_size, MPI_DOUBLE, MPI_COMM_WORLD);
		}
#endif
	
#if 0
	for (int k = 0; k < 100; k++)
	{
		for (int i = 0; i < n; i++)
		{
			y[i] = 0;
			for (int j = 0; j < n; j++)
			{
				y[i] += A_glob[i*n + j] * x[j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			x[i] = y[i];
		}
	}
#endif

	return 0;
}

int main(int argc, char **argv)
{
	// Иницилизация MPI
	int rank, size;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	// Определение размера задачи и подзадач
	int n = 840;
	int n1 = n / size;
	//if (rank < n - n1 * size) n1++;

	// Выделение памяти 
	double *A_glob = malloc_array(n*n);
	double *x = malloc_array(n);
	double *y = malloc_array(n);

	// Заполнение матрицы А и вектора х
	if (rank == 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				A_glob[i*n + j] = (double)rand() / RAND_MAX / (n / 2);
			}
			x[i] = (double)rand() / RAND_MAX / (n / 2);
			y[i] = 0;
		}
	}

	MPI_Barrier(MPI_COMM_WORLD);

	multmv(n, A_glob, x, y);

	if (rank == 0) {
		cout << "The Program is RUN on " << size << " CPU" << endl;
		cout << " y[0] = " << y[0] << "!" << endl;
		//for (int i = 1; i < n; i++) cout << " y[" << i << "] = " << y[i] << "!" << endl;
	}

	// Вызов функции из библиотеки, которая проводит проверку корректности реализации алгоритма и его ускорения
	submit(multmv);

	free_array(A_glob, n*n);
	free_array(x, n);
	free_array(y, n);
	MPI_Finalize();
	system("pause");
	return 0;
}

