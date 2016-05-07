#include<iostream>
using namespace std;
int f(int i)
{  
	if(i==1)
	{
		cout<<"End"<<endl;
	}
	else if(i%2==0)
	{
		cout<<i<<"/2="<<i/2<<endl;
		f(i/2);
	}
	else
	{
		cout<<i<<"*3+1="<<i*3+1<<endl;
		f(i*3+1);
	}
}
int main()
{
	int a;
	cin>>a;
	f(a);
return 0;
}
