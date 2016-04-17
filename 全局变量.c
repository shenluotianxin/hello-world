#include<iostream>
#include"max.h"
using namespace std;
int a=0,b=0;
void exchange()
{
	int p;
	if(a<b)
	{
		p=a;a=b;b=p;
		}
	}

int main(){
		cin>>a>>b;
		exchange();
		cout<<a<<" "<<b;
		return 0;
		}
		   
