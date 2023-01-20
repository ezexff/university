#include "stdafx.h"
#include <iostream>
using namespace std;

float funct(float x);

long fact(long z){
if (z==1) return 1;
return (z*fact(z-1));}

int main(){
float x1;
cin>>x1;
cout<<funct(x1);
system ("pause");}

float funct(float x){
float S=1;
float n=1;
float slag=1;
while (slag>0.0001)
{
 slag=(cos(n*x))/fact(n*1);   S=S+(cos(n*x)/fact(n*1)); n=n+1;}
return S;
}