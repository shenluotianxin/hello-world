#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int y,m,d;
	char a,b;
	cin>>y>>a>>m>>b>>d;
	if(m!=2&&d<30)
		d=d+1;
	else if(m==2)
	{
		if(d<28)
			d=d+1;
		else if(d==28)
		{
			if(y%400==0||(y%4==0&&y%100!=0))
				d=29;
			else
			{
				d=1;
				m=3;
			}
		}
		else if(d==29)
		{
			d=1;
			m=3;
		}
	}
	else if(d==30)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			d=31;
		else
		{
			d=1;
			m=m+1;
		}
	}
	else 
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10)
		{
			d=1;
			m=m+1;
		}
		else
		{
			d=1;
			m=1;
			y=y+1;
		}
	}
	cout<<y<<a;
	cout<<setw(2)<<setfill('0')<<m<<b;
	cout<<setw(2)<<setfill('0')<<d<<endl;
return 0;
}
