// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


int c[1000][1000];
int dp[1000][1000];
int path[1000][1000];

int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream f("input2.txt");
	int n, m;
	f >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			f >> c[i][j];
		}
	}

	dp[0][0] = c[0][0];


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i || j) {
				dp[i][j] = -32000;     
				path[i][j] = 0;

				if (i - 1 >= 0 && j - 1 >= 0) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + c[i][j]); path[i][j] = -1; //влево-вверх
				}

				if (i - 1 >= 0 && j + 1 >= 0) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j + 1] + c[i][j]); path[i][j] = 1; //вправо-вверх
				}

				if (i - 2 >= 0) {
					dp[i][j] = max(dp[i][j], dp[i - 2][j] + c[i][j]); path[i][j] = 2; //через одну клетку вверх
				}

			}
		}
	}

	//cout << dp[n - 1][m - 1]<<endl;
	int buff=INT_MIN;
	for (int j = 0; j < n; j++) { if (dp[n - 1][j] > buff) buff = dp[n - 1][j]; }
	cout <<"Сумма чисел: "<< buff << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << path[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

