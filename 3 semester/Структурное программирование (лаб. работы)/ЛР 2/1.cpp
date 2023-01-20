#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string znak = ".,! &?'";
	string S = "Test Test Test Test Test Test    Test    ";
	S.append(" ");
	cout << S.find(" T") << endl;
	int n = 0;
	for (int i = 0; i < S.length(); i++)
		if (znak.find(S[i], 0) > znak.length() && znak.find(S[i + 1], 0) < znak.length()) n++;
		//if (S[i] != ' ' && S[i + 1] == ' ') n++;
			cout << n << endl;
			cout << S <<endl ;
	system("pause");
    return 0;
}





#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string znak = ".,! &?'";
	//string S = "    Test, Test, Test Test Test Test    Test    ";
	string S;
	getline(cin, S);;
	S.append(" ");
	//cout << S.find(" T") << endl;
	int n = 0;
	for (int i = 0; i < S.length(); i++)
		if (znak.find(S[i], 0) > znak.length() && znak.find(S[i + 1], 0) < znak.length()) n++;
	//if (S[i] != ' ' && S[i + 1] == ' ') n++;
	cout << n << endl;
	cout << S << endl;
	system("pause");
	return 0;
}



