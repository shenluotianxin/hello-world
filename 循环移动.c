#include<iostream>
using namespace std;
int main(){
	int m,n,a[100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int temp=0;
	for(int i=0;i<m;i++){
		temp=a[n-1];
		for(int j=n-2;j>=0;j--)
			a[j+1]=a[j];
		a[0]=temp;
		}
	for(int i=0;i<n;i++)
	cout<<a[i]<<' ';	
	return 0;
	
	}
