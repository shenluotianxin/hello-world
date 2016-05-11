#include <iostream> 
#include<iomanip>
using namespace std; 
int main()
{
	int m,flag=0;
	float c,b[50];
	int a[50];
	cin>>m;
	cin>>c;
	for(int i=0;i<m;i++)
		cin>>a[i]>>b[i];
	float temp=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		if(b[i]>c)
		{	
			
			cout<<setw(3)<<setfill('0')<<a[i];
			cout<<' '<<setprecision(1)<<fixed<<b[i]<<endl;
			flag=1;
		}
	}
	if(flag==0)
		cout<<"None"<<endl;
return 0;
}
