#include<iostream>
#include <iomanip>
using namespace std;
int main(){
int a[100];
double n,b=0,c=0,d=0,e=0;
cin>>n;
for(int i=0;i<n;i++)
	{
	  cin>>a[i];
	  if(a[i]<=18)
	    b=b+1;
	  else if(a[i]<=35)
	    c=c+1;
	  else if(a[i]<=60)
	    d=d+1;
	  else
	    e=e+1;
		}
  double l,m,j,k;
  l=100*b/n;
  m=100*c/n;
  j=100*d/n;
  k=100*e/n;
cout<<"1-18: "<<fixed<<setprecision(2)<<l<<"%"<<endl;
cout<<"19-35: "<<fixed<<setprecision(2)<<m<<"%"<<endl;
cout<<"36-60: "<<fixed<<setprecision(2)<<j<<"%"<<endl;
cout<<"60-: "<<fixed<<setprecision(2)<<k<<"%"<<endl;
  return 0;
  }
