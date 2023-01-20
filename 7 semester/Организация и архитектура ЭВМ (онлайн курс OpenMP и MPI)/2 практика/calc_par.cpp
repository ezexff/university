#include "GaussSeidel.h"
#include "omp.h"
#include <iomanip>
#include <cstdlib>
#include <iostream>

using namespace std;


int Calc_par(double** u, double** f, int N, double eps)
{

	double max = 0;
	double h = 1.0 / (N + 1); // Шаг сетки

	int IterCnt = 0; // Переменная хранящая количество выполненых итераций
	int BlockSize = 20; // Переменная отвечающая за размерность блока, для которого выполняется обработка
	int BlockCount; // Количество блоков

	cout << fixed << setprecision(10); // Если количество точек по каждому из направлений сетки делится нацело на размер блока, то проводятся вычисления

	if (N % BlockSize == 0) {
		BlockCount = N / BlockSize;
		int num_of_waves = BlockCount * 2 - 1;

		do {
			IterCnt++;
			max = 0;

			int num_of_elems_wave = 0;
			int row_start = 0;
			int col_start = -1;

			// Обход волны
			for (int i_wave = 0; i_wave < num_of_waves; i_wave++) {
				if (i_wave < BlockCount) {
					num_of_elems_wave += 1;
					col_start += 1;
				}
				else {
					num_of_elems_wave -= 1;
					row_start += 1;
				}

				if (col_start >= BlockCount) cout << "Error colstart" << endl;
				if (row_start >= BlockCount) cout << "Error rowstart" << endl;

				if (num_of_elems_wave == 0) cout << "Error num_of_elems_wave" << endl;

				// Обход блоков в волне
#pragma omp parallel shared(max)
#pragma omp for schedule(dynamic, 1)
				for (int i_wave_elem = 0; i_wave_elem < num_of_elems_wave; i_wave_elem++) {
					double max_err_wave = max;
					// Обход элементов внутри блока
					for (int idx = 0; idx < BlockSize; idx++) // Строки блока
						for (int jdy = 0; jdy < BlockSize; jdy++) { // Столбцы блока
							// Индексы текущего элемента
							int i = (row_start + i_wave_elem)*BlockSize + idx + 1;
							int j = (col_start - i_wave_elem)*BlockSize + jdy + 1;

							// Предыдущее значение
							double u_old = u[i][j];

							// Расчет в соотвествии с формулами Гаусса-Зейделя
							u[i][j] = 0.25*(u[i - 1][j] + u[i + 1][j] + u[i][j - 1] + u[i][j + 1] - h * h*f[i - 1][j - 1]);

							// Текущая ошибка с предыдущей итерацией
							double curr_err = abs(u[i][j] - u_old);

							// Новая максимальная ошибка
							if (curr_err > max_err_wave) max_err_wave = curr_err;
						}
#pragma omp critical
					{
						if (max_err_wave > max) max = max_err_wave;
					}
				}
			}
		} while (max > eps); // Цикл выполняется до тех пор пока максимум ошибки не будет меньше заданной точности
	}
	else {
		cout << "Error!!!" << endl;
	}
	return IterCnt;
}
