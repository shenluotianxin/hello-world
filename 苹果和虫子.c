#include<iostream>
using namespace std;
int main(){
 int n,x,y,left;
 cin>>n>>x>>y;
 if(y%x==0)
 	{left=n-y/x;}
 else if(y%x!=0)
 	{left=n-y/x-1;}
	
if(left>=0)
{cout<<left<<endl;}
if(left<0)
{cout<<0<<endl;}
return 0;
}
