#include "stdafx.h"
#include "iostream"
#include <fstream>
#include <string>
using namespace std;
int main() {
	int k = 0,n; //счётчики
	float m1, m11, m111, m2, x;


	cout << "skol'ko chisel zapisat'?" << endl; cin>>n;
	// Запись числа в файл
	cout << "Vvod chisel:" << endl;

	ofstream out("input.txt", ios::binary | ios::out);
	//ios::binary - ввод-вывод будет выполняться в двоичном виде (по умолчанию текстовой режим); 
	//ios::in | ios::out  открывается существующий файл для чтения и записи:;
	for (int i = 0; i < n; i++) { cin>>m1; out.write((char*)&m1, sizeof m1);
	}
	out.close();
	// Сравниваемое значение
	cout << "x = "; cin >> x;

	// Чтение числа из файла
	ifstream in("input.txt", ios::binary | ios::in); 
	if (!in)cout << "No!" << endl;
	else while (true) {
		in.read((char*)&m2, sizeof m2);
		if (in.eof()) break;
		if (x == m2) { k = k + 1; } 
		//cout << m2<<endl;
	}
	in.close();
	cout << "k = " << k << endl;
	system("pause");
	return 0;

}