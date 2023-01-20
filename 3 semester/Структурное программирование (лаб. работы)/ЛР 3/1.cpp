#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

int main()
{
	int n = 0;
	string str;
	string simvol;
	getline(cin, str);
	string s; 
	ifstream file("e:\\test1.txt"); 

	while (getline(file, s)) { 
		cout << s << endl;
		simvol = s.front();
		if (simvol==str) n++;
	}

	file.close(); 
	cout << n << endl;
	system("pause");
	return 0;
}
