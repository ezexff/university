#include "stdafx.h"
#include <iostream>
using namespace std;

struct TEST {
    int day;
	int month;
	//int d1;
    //int d2;
    
    
} date;

int main() {
	TEST d1;
	TEST d2;
    cin>>d1.day;
	cin>>d1.month;
switch (d1.month)
 {
 case 1:
     {
		 if (d1.day==31 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
     }
 case 2:
	 {
		 if (d1.day==28 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 3:
	 {
		 if (d1.day==31 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 4:
	 {
		 if (d1.day==30 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 5:
	 {
		 if (d1.day==31 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 6:
	 {
		 if (d1.day==30 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 7:
	 {
		 if (d1.day==31 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 8:
	 {
		 if (d1.day==31 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 9:
	 {
		 if (d1.day==30 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 10:
	 {
		 if (d1.day==31 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 11:
	 {
		 if (d1.day==30 ){d2.day=1; d2.month= d1.month+1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
 case 12:
	 {
		 if (d1.day==31 ){d2.day=1; d2.month= 1;}  else {d2.day=d1.day+1; d2.month=d1.month;}
		 break;
	 }
}


    cout << "day & month (d1) = " << d1.day <<" "<< d1.month<< '\n';
    cout << "day & month (d2) " << d2.day <<" "<< d2.month<< '\n';

	system("pause");
}

//Февраль





