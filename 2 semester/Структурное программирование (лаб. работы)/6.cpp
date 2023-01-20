#include "stdafx.h"
#include <iostream>
using namespace std;

float funct(float *m1, int n);
double funct(double *m2, int n);
char funct(char *m3, int n);
char* funct(char* *m4, int n);

const int n = 5;

void main()
{
	setlocale(LC_ALL, "Russian");

	float m1[n] = { 0.5,0.7,2.5,4.4,0.2 };
	double m2[n] = { 0.5,0.7,2.5,4.4,0.2 };
	char m3[n] = { '+','-','=',':','/' };
	char* m4[n] = { "123","abc","456","qwe","789" };
	cout <<"Произведение массива float="<< funct(m1, n) << endl;
	cout << "Сумма массива double="<< funct(m2,n)<<endl;
	cout << "Символ из массива char: " << funct(m3, n) << endl;
	cout << "Символ из массива char*: " << funct(m4, n) << endl;
	system("pause");
}

float funct(float *m1, int n) {
	float P = 1;
	for (int i = 0; i <= 4;i++) { P = P*m1[i]; }
	return P;
}

double funct(double *m2, int n) {
	double S = 0;
	for (int i = 0; i <= 4;i++) { S=S+m2[i]; }
	return S;
}

char funct(char *m3, int n) {
	char znak='0';
	for (int i = 0; i <= 4;i++) {
		if (m3[i] == '+') znak = m3[i]; }
	return znak;
}
char* funct(char* (*m4), int n) {
	char* stroka = "net";
	for (int i = 0; i <= 4;i++) {
		if (m4[i] == "abc") stroka = m4[i];
	}
	return stroka;
}