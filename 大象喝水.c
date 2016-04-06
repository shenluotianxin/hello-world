#include<iostream>
using namespace std;
int main(){
 int h,r;
 const double PI=3.14159;
 cin>>h>>r;
 double t=PI*r*r*h;
 int x=20000/t+1;
 cout<<x<<endl;
 return 0;
}
