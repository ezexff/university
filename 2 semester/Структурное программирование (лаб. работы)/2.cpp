#include "stdafx.h"
#include <iostream>
using namespace std;

void funct(float *x,float *S1);

long fact(long z){
if (z==1) return 1;
return (z*fact(z-1));}

int main(){
float x1,x2;
cin>>x1,x2;
funct(&x1,&x2);
cout<<x2;
system ("pause");}

void funct(float *x, float *S1){
float S=1;
float n=1;
float slag=1;
while (slag>0.0001)
{
 slag=(cos(n*(*x)))/fact(n*1);   S=S+(cos(n*(*x))/fact(n*1)); n=n+1;
}
*S1=S;
}
