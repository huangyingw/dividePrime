#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

void dividePrime(int num, int result[])
{
  int fac=2;
  while ( num > 1)
  {
    fac=2;
    while ( 0!=num%fac )
      fac++;
    *result++=fac;
    num/=fac;
  }
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
  /*
     12321=3*3*37*37*
     12325=5*5*17*29*
     12320=2*2*2*2*2*5*7*11*
     */
  return 0;
}

