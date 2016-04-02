#include<iostream>
using namespace std;
int main(){
int a[20],n=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
for (int k=0;k<20;k++)
{cin>>a[k];}
for(int l=0;l<20;l++)
{if(a[l]=0)
	n++;
 if(a[l]=1)
 	b++;
 if(a[l]=2)
 	c++;
 if(a[l]=3)
 	d++;
 if(a[l]=4)
 	e++;
 if(a[l]=5)
 	f++;
 if(a[l]=6)
 	g++;
 if(a[l]=7)
 	h++;
 if(a[l]=8)
 	i++;
 if(a[l]=9)
 	j++;
}
cout<<n<<b<<c<<d<<e<<f<<g<<h<<i<<j;
return 0;
}

