#include<iostream>
#include<string.h>
using namespace std;
int main(){ 
  char a [80],b [80];
  cin.getline(a,80);
  cin.getline(b,80);
  for(int i=0;a[i]!='\0';i++)
  {
  		if(a[i]>'A'&&a[i]<'Z')
		{
			a[i]=a[i]+32;
		}
  }
  for(int i=0;b[i]!='\0';i++)
  {
  		if(b[i]>'A'&&b[i]<'Z')
		{
			b[i]=b[i]+32;
  		}
  }
  int c=strcmp(a,b);
  if(c>0)
  	cout<<'>'<<endl;
  else if(c==0)
  	cout<<'='<<endl;
  else
  	cout<<'<'<<endl;
  return 0;
  }
