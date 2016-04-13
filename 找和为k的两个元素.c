#include<iostream>
using namespace std;
int main(){
 int b=0,n,k,a[1000];
 cin>>n>>k;
 for(int i=0;i<n;i++)
   cin>>a[i];
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
     if(a[i]+a[j]==k)
	   { b=1;}
	   }
	   }
 if(b==1)
  { cout<<"yes"<<endl;}
 else if(b==0)
  { cout<<"no"<<endl;}
return 0;
  }
