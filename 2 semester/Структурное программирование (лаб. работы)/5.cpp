#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

long fact(long z);
float funct1(float x);
void funct2(float *x, float *S1);
float& funct3(float &x);


int main() {
	system("color 02");
	setlocale(LC_ALL, "Russian");
	int v;
	cout << setw(20)<< "Список команд:" << endl;
	cout << "1 - функция принимает параметры по значению и возвращает значение;" << endl;
	cout << "2 - функция в качестве параметров принимает указатели, в том числе и параметр адреса результата, а сама функция типа Void;" << endl;
	cout << "3 - функция принимает параметры по ссылке и возвращает ссылку на  результат."  << endl;
	cout << "4 - выход из программы." << endl << endl;
	cout << setw(20)<< "Номер команды: ";
	cin >> v;
	while (v != 4) 
	{
		    switch (v){
		case 1:
			float x1;
			cout << "Введите x (по условию задачи, x=0.2): ";
			cin >> x1;
			cout << "Сумма равна: ";
			cout << funct1(x1) << endl<<endl;
			cout << "Новое значение команды: ";
			cin >> v;
			break;
		case 2:
			float y1, y2;
			cout << "Введите x (по условию задачи, x=0.2): ";
			cin >> y1;
			funct2(&y1, &y2);
			cout << "Сумма равна: ";
			cout << y2 << endl << endl;
			cout << "Новое значение команды: ";
			cin >> v;
			break;
		case 3:
			float z1;
			cout << "Введите x (по условию задачи, x=0.2): ";
			cin >> z1;
			cout << "Сумма равна: ";
			cout << funct3(z1) << endl << endl;
			cout << "Новое значение команды: ";
			cin >> v;
			break;
		default:
			cout << "Введено неверное значение команды: " << v << ". Попробуйте ещё раз." << endl<<endl;
			cout << "Новое значение команды: ";
			cin >> v;
		}
	}
}

long fact(long z) {
	if (z == 1) return 1;
	return (z*fact(z - 1));
}

float funct1(float x) {
	float S = 1;
	float n = 1;
	float slag = 1;
	while (slag>0.0001)
	{
		slag = (cos(n*x)) / fact(n * 1);   S = S + (cos(n*x) / fact(n * 1)); n = n + 1;
	}
	return S;
}

void funct2(float *x, float *S1) {
	float S = 1;
	float n = 1;
	float slag = 1;
	while (slag>0.0001)
	{
		slag = (cos(n*(*x))) / fact(n * 1);   S = S + (cos(n*(*x)) / fact(n * 1)); n = n + 1;
	}
	*S1 = S;
}

float& funct3(float &x) {
	float S = 1;
	float n = 1;
	float slag = 1;
	while (slag>0.0001)
	{
		slag = (cos(n*x)) / fact(n * 1);   S = S + (cos(n*x) / fact(n * 1)); n = n + 1;
	}
	return S;
}