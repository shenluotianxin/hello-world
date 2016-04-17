#include<iostream>
using namespace std;
int main(){
	int a=0;
	while(cin>>a){
	if(a%3==0){
		if(a%5!=0&&a%7!=0)
			cout<<'3';
		if(a%5==0&&a%7!=0)
			cout<<'3'<<' '<<'5';
		if(a%5!=0&&a%7==0)
			cout<<'3'<<' '<<'7';
		if(a%5==0&&a%7==0)
			cout<<'3'<<' '<<'5'<<' '<<'7';
		}
	else if(a%5==0){
		if(a%7==0)
			cout<<'5'<<' '<<'7';
		if(a%7!=0)
			cout<<'5';
		}	
	else if(a%7==0)
		cout<<'7';
	else
		cout<<'n';
	cout<<endl;
	}
return 0;
	}
