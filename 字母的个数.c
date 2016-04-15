#include<iostream>
using namespace std;
int main(){ 
  char str[80];
  int a=0,e=0,i=0,o=0,u=0;
  cin.getline(str,80);
  for(int j=0;str[j]!='\0';j++)
  { if(str[j]=='a')
	  a++;
   else if(str[j]=='e')
	  e++;
   else if(str[j]=='i')
	  i++;
   else if(str[j]=='o')
	  o++;
   else if(str[j]=='u')
  	  u++;
	}
  cout<<a<<" "<<e<<" "<<i<<" "<<o<<" "<<u<<endl;
  return 0;
  }
