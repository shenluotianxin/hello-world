#include<iostream>
using namespace std;
int main(){
 int a,b[5];
 cin>>a;
 for(int i=0;i<5;i++)
   cin>>b[i];
 int add=0;
 for(int i=0;i<5;i++){
   if(b[i]<a)
     add=add+b[i];
	 }
  cout<<add<<endl;

 return 0;
  }
