#include<iostream>
using namespace std;
int main(){
 unsigned int a;
 int b,c,d;
 cin>>a;
 b=a%10;
 c=a/10%10;
 d=a/100;
 cout<<d<<endl<<c<<endl<<b<<endl;
return 0;
}
