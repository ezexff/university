#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	int k = 0;
	int max;
	string S;
	ifstream file("e:\\test.txt");
	while (getline(file, S)) {
		cout << S << endl;
		for (int i = 0; i < S.length(); i++) {
			if ((S[i] >= '0') && (S[i] <= '9')) n++;
			if (((S[i] >= '�') && (S[i] <= '�')) || ((S[i] >= '�') && (S[i] <= '�'))) k++;
		}
	}
		file.close();
		cout << endl;
		if (n > k) { cout << "���� ������, ��� ������� ����!" << endl; }
		else {
			if (n == k) { cout << "���� � ������� ���� ���������� ����������!" << endl; }
			else { cout << "������� ���� ������, ��� ����!" << endl; }
		}
		cout << endl << "����: " << n << endl;
		cout << "����: " << k << endl;
		system("pause");
		return 0;
	}


