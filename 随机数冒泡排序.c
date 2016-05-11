#include <iostream> 
#include <stdlib.h> 
#include <time.h> 
using namespace std; 
int main() 
{	int a[10]={0}; 
    srand((unsigned)time(NULL)); 
	for(int i = 0; i < 10;i++ ) 
		a[i]=rand()%100;//生成10个小于100的随机数
	int temp=0;
	for(int i = 0; i < 10;i++ )
	{
		for(int j=0;j<10;j++)	
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}//冒泡排序，两个循环。
	for(int i=0;i<10;i++)
		cout<<a[i]<<endl;
return 0;
}
