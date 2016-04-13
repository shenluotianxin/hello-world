#include<iostream>
using namespace std;
int main(){
  int n;
  double a[1000];
  double c,b;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++){
    c=50+a[i]/3;
	b=a[i]/1.2;
	if(c<b)
      cout<<"Bike"<<endl;
	else if(c>b)
	  cout<<"Walk"<<endl;
	else if(c==b)
	  cout<<"All"<<endl;
	  }
 return 0;
  }
