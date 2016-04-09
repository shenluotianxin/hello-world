#include<iostream>
using namespace std;
int main(){
  int money;
  cin>>money;
  int a,b,c,d,e,f,g,h,i,j;
  a=money/100;
  b=money%100;
  c=b/50;
  d=b%50;
  e=d/20;
  f=d%20;
  g=f/10;
  h=f%10;
  i=h/5;
  j=h%5;
  cout<<a<<endl<<c<<endl<<e<<endl<<g<<endl<<i<<endl<<j<<endl;
  return 0;
  }
