#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int a[6];
 for(int i=0;i<6;i++)
 {
 	cin>>a[i];
	}
 int b,c,max=0,min=100;
 for(int i=0;i<6;i++)
 {
 	if (a[i]%2!=0)
		{b=a[i];
		 if(b>max)
		 	max=b;
		}
	else
		{c=a[i];
		if(c<min)
			min=c;
			}
 }
 cout<<abs(max-min)<<endl;
 return 0;
 }
