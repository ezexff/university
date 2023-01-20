#include "stdafx.h"
#include "iostream"
#include <fstream>
#include <string>
using namespace std;
int main() {
	int m2, m1;
	int mas[3][3];
	int mas1[3][3];
	FILE *f; FILE *g;

	//Запись двумерного массива в файл f
	cout << "Vvod massiva 3x3:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mas[i][j];
		}
	}
	int l = sizeof(mas) / sizeof(int);
	f = fopen("f.txt", "wb");
	fwrite(&mas, sizeof(int), l, f);
	fclose(f);

	//Чтение массива из файла f и запись чётных чисел в файл g
	f = fopen("f.txt", "rb");
	if (!f)cout << "No!" << endl;
	else while (!feof(f)) {
		fread(&mas1, sizeof(int), l, f);
		if (feof(f)) break;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mas1[i][j] % 2 == 0) { g = fopen("g.txt", "ab");  fwrite(&mas1[i][j], sizeof(int), 1, g);  fclose(g); }
		}
	}
	fclose(f);

	//Чтение чисел из файла g
	g = fopen("g.txt", "rb");
	if (!g)cout << "No!" << endl;
	else while (!feof(g)) {
		fread(&m2, sizeof(int), 1, g);
		if (feof(g)) break;
		cout << m2 << endl;
	}
	fclose(g);

	system("pause");
	return 0;

}