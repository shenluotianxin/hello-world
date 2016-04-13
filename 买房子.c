#include<iostream>
using namespace std;
int main(){
  float n,k;
  float m=0.0,f=200.0;
  cin>>n>>k;
    for(int i=1;i<=20;i++){
	  m+=n;
	  if(m>=f)
	    {cout<<i<<endl;
		return 0;
		}
	  f=f*(1+k/100);
		}
		
  cout<<"Impossible"<<endl;
 return 0;
  }
