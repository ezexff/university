// ЛР2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


float f2(float x)
{
	return (x*x*x - 3 * x*x - 24 * x - 5);
}

float f3(float x)
{
	return (3*x*x - 6 * x - 24);
}

int main()
{
	setlocale(0, "");
	float x1, x2,x,x0;
	cout << "x^3 - 3x^2 - 24x - 5 = 0\n";
	cout << "Приближенное значение=";
	cin >> x;

	double e = 0.001;
	do
	{
		x0 = x;
		x = x0 - f2(x) / f3(x);
	} while (fabs(x0 - x)>e);
	
	cout <<"Корень уравнения: "<< x<<endl;

	system("pause");
	return 0;
}
