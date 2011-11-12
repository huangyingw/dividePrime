// dividePrime.cpp : Defines the entry point for the console application.
//

#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

void dividePrime(int num, int result[])
{
  int fac=2;
  if ( 1 == num)
  {
    return ;
  }
  while ( 0!=num%fac )
    fac++;
  result[0]=fac;
  dividePrime(num/fac,++result);
}

int main()
{
  int result[1000]={0};
  dividePrime(12321,result);
  cout<<"12321"<<"=";
  for (int i=0;result[i]!=0;i++)
  {
    cout<<result[i]<<"*";
  }
  cout<<endl;

  dividePrime(12325,result);
  cout<<"12325"<<"=";
  for (int i=0;result[i]!=0;i++)
  {
    cout<<result[i]<<"*";
  }
  cout<<endl;

  dividePrime(12320,result);
  cout<<"12320"<<"=";
  for (int i=0;result[i]!=0;i++)
  {
    cout<<result[i]<<"*";
  }
  cout<<endl;
  return 0;
}

