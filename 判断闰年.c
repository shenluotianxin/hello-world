#include<iostream>
using namespace std;
int main(){
	int a=0;
	cin>>a;
	if(a%400==0||(a%4==0&&a%100!=0))
		cout<<'Y';
	else
		cout<<'N';
	return 0;
	}
