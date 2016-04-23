#include<iostream>
using namespace std;
int main(){
	int a[10001]={0},b[100][2]={0},l,m,sum=0;
	cin>>l>>m;
	for(int i=0;i<=l;i++)
		a[i]=1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<2;j++)
			cin>>b[i][j];
			}
	for(int i=0;i<m;i++)
	{	
		for(int k=b[i][0];k<=b[i][1];k++)
			a[k]=0;
			}
	for(int i=0;i<=l;i++)
		sum=a[i]+sum;
	cout<<sum<<endl;
	return 0;

	}
