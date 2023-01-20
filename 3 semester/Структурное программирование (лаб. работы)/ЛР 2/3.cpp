#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	//string S = "p,mama,milo,kot,ss";
	string S;
	cout << "Enter string:" << endl;
	getline(cin, S);
	cout << endl;
	//cout << S << endl;
	string word;
	int l = 0, k = 0, n = 0;
	int min = 9999, a;
	S.append(",");
	for (int i = 0; i < S.length(); i++)
		if (S[i] == ',') { k = i; l = k - n; if (l < min) { min = l; a = n; } n = k + 1; }
	//cout << min << endl;
	cout << "Min word:" << endl;
	cout << S.substr(a,min) << endl;
	system("pause");
	return 0;
}
