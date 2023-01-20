#include "stdafx.h"
#include <iostream>
using namespace std;

struct TEST {
	char name1[25];
	char name2[25];
	char name3[25];
	int year;
	char education[25];

} date;

int main() {
	setlocale(LC_ALL, "Russian");
	TEST n1;
	TEST n2;
	TEST n3;
	cout << "Фамилия1: ";
	cin >> n1.name1;
	cout << "Имя1: ";
	cin >> n1.name2;
	cout << "Отчество1: ";
	cin >> n1.name3;
	cout << "Год рождения1: ";
	cin >> n1.year;
	cout << "Образование1: ";
	cin >> n1.education;
	cout << endl;
	cout << "Фамилия2: ";
	cin >> n2.name1;
	cout << "Имя2: ";
	cin >> n2.name2;
	cout << "Отчество2: ";
	cin >> n2.name3;
	cout << "Год рождения2: ";
	cin >> n2.year;
	cout << "Образование2: ";
	cin >> n2.education;
	cout << endl;
	cout << "Фамилия3: ";
	cin >> n3.name1;
	cout << "Имя3: ";
	cin >> n3.name2;
	cout << "Отчество3: ";
	cin >> n3.name3;
	cout << "Год рождения3: ";
	cin >> n3.year;
	cout << "Образование3: ";
	cin >> n3.education;


	char education1[25] = "v";
	cout << endl;
	cout << "Фамилии людей с высшим образованием: " << endl;
	if (strcmp(n1.education, education1) == 0) { cout << n1.name1 << endl; };
	if (strcmp(n2.education, education1) == 0) { cout << n2.name1 << endl; };
	if (strcmp(n3.education, education1) == 0) { cout << n3.name1 << endl; };
	cout << endl;


	int year1;
	cout << "Введите год рождения: " << endl;
	cin >> year1;
	cout << endl;
	if (year1 == n1.year) {
		cout << n1.name1 << endl;
		cout << n1.name2 << endl;
		cout << n1.name3 << endl;
		cout << n1.year << endl;
		cout << n1.education << endl << endl;;
	}

	if (year1 == n2.year) {
		cout << n2.name1 << endl;
		cout << n2.name2 << endl;
		cout << n2.name3 << endl;
		cout << n2.year << endl;
		cout << n2.education << endl << endl;
	}

	if (year1 == n3.year) {
		cout << n3.name1 << endl;
		cout << n3.name2 << endl;
		cout << n3.name3 << endl;
		cout << n3.year << endl;
		cout << n3.education << endl << endl;;
	}

	system("pause");
}