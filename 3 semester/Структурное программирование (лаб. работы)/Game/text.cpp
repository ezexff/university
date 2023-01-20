/*
#pragma once
#include <iostream>
#include <time.h>
using namespace std;

int co;
int bu;
int k=0;
int main()
{
	extern int number;
	++number;
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, n, a1, b1, c1, d1;
	srand(time(0));
	do { a = rand() % 10; b = rand() % 10; c = rand() % 10; d = rand() % 10; } while (a == b || a == c || a == d || b == c || b == d || c == d);
	//cout << a<<b<<c<<d<<endl;
	do {
		cout << "Введите число "; cin >> n; a1 = n / 1000; b1 = n / 100 % 10; c1 = n / 10 % 10; d1 = n % 10;
		::co = 0;
		if (a == a1 || a == b1 || a == c1 || a == d1) ::co++;
		if (b == a1 || b == b1 || b == c1 || b == d1) ::co++;
		if (c == a1 || c == b1 || c == c1 || c == d1) ::co++;
		if (d == a1 || d == b1 || d == c1 || d == d1) ::co++;
		::bu = 0;
		if (a == a1) ::bu++;
		if (b == b1) ::bu++;
		if (c == c1) ::bu++;
		if (d == d1) ::bu++;
		::k++;
		cout << ::co << "-" << ::bu << endl;
	} while (::bu != 4);
	cout << "Вы победили!!!" << endl;
	cout << "Число ходов " << ::k << endl;
	system("pause");
	return 0;
}



int fact(int N){
if (N < 0)
return 0;
if (N == 0)
return 1;
else
return N * fact(N - 1);}
*/