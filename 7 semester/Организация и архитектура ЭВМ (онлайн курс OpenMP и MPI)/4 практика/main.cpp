#include <stdio.h>
#include "mpi.h"
#include "Exercise1_dll.h"
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
double scalmult(int n, double* a, double* b)
{
	// Определения числа доступных процессов и размера подзадач
	int myid, numprocs, i;
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);

	double res, p_res = 0.0;

	/*вычисление частичной суммы на каждом из процессов*/
	for (i = myid * n / numprocs; i < (myid + 1)*n / numprocs; i++)
		p_res = p_res + a[i] * b[i];

	/* сборка на всех процессах результата*/
	MPI_Allreduce(&p_res, &res, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);

	res = sqrt(res);

	//cout << "rank=" << myid << " res=" << res << endl;
	return res;
}

int main(int argc, char **argv)
{

	// Иницилизация MPI
	int rank, size;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	// Определение размера задачи и подзадач
	int n = 100;
	int n1 = n / size;
	// rank=0 n=100 n1=25 size=4
	// rank < 100-25*4
	// rank < 0
	if (rank < n - n1 * size) n1++;

	// Выделение памяти 
	double *a = malloc_array(n1);
	double *b = malloc_array(n1);

	// Заполнение векторов
	for (int i = 0; i < n1; i++)
	{
		a[i] = (double)rand() / RAND_MAX;
		b[i] = (double)rand() / RAND_MAX;
	}

	MPI_Bcast(a, n1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	MPI_Bcast(b, n1, MPI_DOUBLE, 0, MPI_COMM_WORLD);

	double sc = scalmult(n, a, b);

	if (rank == 0) {
		cout << "The Program is RUN on " << size << " CPU" << endl;
	}

	// Вызов функции из библиотеки, которая проводит проверку корректности реализации алгоритма и его ускорения
	submit(scalmult);

	free_array(a, n);
	free_array(b, n);
	MPI_Finalize();
	system("pause");
	return 0;
}

