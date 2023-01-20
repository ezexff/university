#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	string Str;
	cout << "Enter string\n";
	getline(cin, Str);
	const string delims = ",";
	for (string::iterator it = Str.begin(); it != Str.end(); ++it)
	{
		if (delims.find(*it) != string::npos)
			*it = ' ';
	}
	istringstream ist(Str);
	vector<string> Vec;
	string tmp;
	while (ist >> tmp)
		Vec.push_back(tmp);
	string max;
	const size_t inf = 300;
	size_t shortlen = inf;
	for (size_t i = 0; i<Vec.size(); ++i)
	{
		if (Vec[i][Vec[i].size() - 1] == 'a'
			&& Vec[i].size() < shortlen)
		{
			max = Vec[i];
			shortlen = Vec[i].size();
		}
	}
	if (shortlen == inf)
	{
		cerr << "There are no such words\n";
		return 1;
	}
	cout << max << endl;
	system("pause");

	return 0;
}