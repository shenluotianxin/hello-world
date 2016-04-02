#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
if(a==1||a==3||a==5)
	cout<<"NO"<<endl;
else if(a<1||a>7)
	cout<<"请输入1到7之间的数。"<<endl;
else 
	cout<<"YES"<<endl;
return 0;
}
