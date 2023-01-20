#include "submit.h"
#include "omp.h"
#include "stdlib.h"
#include "time.h"
#include "ex_function.h"
#include "stdio.h"

float* vec_random(int n, bool normal)
{
	float* rand_arr = new float[n];
	
	// ----------------------------------------------------------
	// Комментарий 1. После этого комментария должен быть ваш код
	// ----------------------------------------------------------

#pragma omp parallel num_threads(n)
	{
		srand(int(time(NULL)) ^ omp_get_thread_num());
		rand();
		rand_arr[omp_get_thread_num()] = rand();

		if (normal)
		{
#pragma omp barrier // Это дериктива синхронизации. Мы с вами их еще не рассматривали, 
			// но для корректной реализации при выполнении этого кода внутри
			// параллельной области, она необходима
			vec_random_norm(rand_arr, n);
		}
		Submit_test();
	}
	// ----------------------------------------------------------------------------------------
	// -- весь код между этим комментарием и комментарий 1 должен быть в параллельной области--
	// ----------------------------------------------------------------------------------------
return rand_arr;
}