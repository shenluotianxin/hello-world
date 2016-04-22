#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int k=0,n,a[100][100];
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
					cin>>a[i][j];
	for(int i=1;i<n-1;i++)
		for(int j=1;j<n-1;j++)
		{	if(a[i-1][j]-a[i][j]>=50&&a[i+1][j]-a[i][j]>=50&&a[i][j+1]-a[i][j]>=50&&a[i][j-1]-a[i][j]>=50)
		k++;
		}
	cout<<k<<endl;
	return 0;
			
	
	}
