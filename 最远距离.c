#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	double a[100],b[100],c[100][100];
	for(int i=0;i<n;i++)
	cin>>a[i]>>b[i];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=fabs(((a[i]-a[j])*(a[i]-a[j]))+((b[i]-b[j])*(b[i]-b[j])));

		}
			}



	double max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(c[i][j]>max)
				max=c[i][j];
				}
				}


	cout<<fixed<<setprecision(4)<<sqrt(max)<<endl;
return 0;
	}
