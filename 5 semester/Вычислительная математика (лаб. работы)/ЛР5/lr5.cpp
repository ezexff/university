// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include <cmath>
#include "stdafx.h"
#include <iostream>
using namespace std;

const float E1 = 2.71828182845904523536;

float f2(float x)
{
	return (pow(E1,x)/(1+pow(E1,2*x)));
}

int main()
{
	float n,a,b,dx;
	dx = 0.001;
	a = 0; b = 1;
	n = (b - a) / dx + 1;
	float y = a;
	float s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += f2(y)*dx;
		y += dx;
	}

	cout << "s=" << s<< endl;
	system("pause");
	return 0;
}