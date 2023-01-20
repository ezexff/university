// ЛР2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;


float f1(float x)
{
	return (2*x - log(x)-7);
}

float mpd(float a, float b)
{
	float x = (b + a) / 2;
	while (abs(f1(x)) > 0.001)
	{
		if (f1(x) > 0)b = x;
		else a = x;
		x = (b + a) / 2;
	}
	return x;
}

int main()
{
	setlocale(0, "");
	float x1, x2;
	cout << "2x – lgx=7\n";
	cout << "Левая граница a=";
	cin >> x1;
	cout << "Правая граница b=";
	cin >> x2;

	cout <<"Корень уравнения: " << mpd(x1, x2) << endl;

	system("pause");
	return 0;
}
