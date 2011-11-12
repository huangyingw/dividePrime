#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;
#define MAX 1000

int* dividePrime(int num)
{
  int *result=new int[MAX];
  int *nav=result;
  int fac=2;
  while ( num > 1)
  {
    fac=2;
    while ( num%fac )
      fac++;
    *nav++=fac;
    num/=fac;
  }
  *nav=0;
  return result;
}

int main()
{
  int *result=NULL;
  result=dividePrime(12321);
  cout<<"12321"<<"=";
  for (int i=0;result[i]!=0;i++)
  {
    cout<<result[i]<<"*";
  }
  cout<<endl;

  result=dividePrime(12325);
  cout<<"12325"<<"=";
  for (int i=0;result[i]!=0;i++)
  {
    cout<<result[i]<<"*";
  }
  cout<<endl;

  result=dividePrime(12320);
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

