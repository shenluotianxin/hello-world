#include<iostream>
using namespace std;
int main(){
int n,a[100];
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=1;i<n;i++){
	if(a[i-1]>a[i]){
		int temp=0;
		a[i]=a[i-1];
		temp=a[i];
		a[i-1]=a[i];
	}
}
cout<<a[n-1]<<endl;
return 0;
}
