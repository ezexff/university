#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;



int main(int argc, char* argv[])
{
setlocale(LC_ALL, "Rus");
int p;
cout << "Введите номер программы от 1 до 3:";
cin>> p;
switch (p)
{
default:cout << "Неверный номер программы!";
   system("pause");
   break;
case 1:
int a, b, c, d;
cin >> a >> b >> c >> d;
if ((a <= b) && (b <= c) && (c <= d)) { a = d;b = d;c = d; }
else
if ((a > b) && (b > c) && (c > d)) { ; }
else { a = a*a;b = b*b;c = c*c;d = d*d; }
cout << "a=" << a << endl;
cout << "b=" << b << endl;
cout << "c=" << c << endl;
cout << "d=" << d;
system("pause");
break;

case 2:
	int n, f, g, h, j;
	cin >> n;
	f = n / 1000;
	g = n / 100 % 10;
	h = n / 10 % 10;
	j = n / 10;
	if ((f == g) || (f == h) || (f == j) || (g == h) || (g == j) || (h == j)) { cout << "yes"; }
	else { cout << "no"; };
	system("pause");
	break;

case 3:
	int x = 1.95, y = 19, z = -3.26;
	float t, u;
	t = 1 + x + (pow(x, 2)) / 2 - (pow(x, 3)) / 3;
	u = exp(x*z) + sqrt(y / x);
	cout << "t=" << t << endl;
	cout << "u=" << u << endl;
	if (t>u) { cout << "True"; }
	else { cout << "False"; };
	system("pause");
		break;
}
	return 0;
}