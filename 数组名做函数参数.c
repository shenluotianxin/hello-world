#include <iostream> 
#include<iomanip>
using namespace std; 
int sum(int *p,int n)
{
	int total=0;
	for(int i=0;i<n;i++)
	{	
		total+=*p++;
	}
	cout<<total<<endl;
}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	sum(a,10);
	return 0;
}
