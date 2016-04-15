#include<iostream>
#include<cmath>
using namespace std;
int main(){ 
  char str1[]="c++ language",str2[20];
  int i=0;
  while(str1[i]!='\0')
  {	
  		str2[i]=str1[i];
		i++;
  }
  str2[i]='\0';
  cout<<str1<<endl;
  cout<<str2<<endl;
  if(str1==str2)
    cout<<"1"<<endl;
  else
    cout<<"2"<<endl;
  return 0;
  }
