#include<iostream>
using namespace std;
int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			cout<<a[i]<<endl;
			return 0;
		}
	}
			cout<<'N'<<endl;
	return 0;

	}
