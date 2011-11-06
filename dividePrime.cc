#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

void dividePrime(int num)
{
  int result=0;
  if ( 1 == num)
    return ;
  int fac=2;
  while ( 0!=num%fac )
    fac++;
  cout<<fac<<"*";
  dividePrime(num/fac);
  cout<<endl;
}

int main() 
{
  dividePrime(12321);
  dividePrime(12325);
  dividePrime(12320);
  return 0;
}
