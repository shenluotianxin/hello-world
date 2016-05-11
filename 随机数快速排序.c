#include <iostream> 
#include <stdlib.h> 
#include <time.h> 
using namespace std; 
int quicksort(int s[],int l,int r)//定义一个快速排序的函数
{
	if(l<r)
	{
		int i=l,j=r,x=s[l];
		while(i<j)
		{
			while(i<j&&s[j]>=x)
				j--;//从数组的左边找比x小的数，找到了就放到左边去
			if(i<j)
				s[i++]=s[j];
			while(i<j&&s[i]<x)//从数组左边找比x大的数，找到了就放到右边去
				i++;
			if(i<j)
				s[j--]=s[i];
		}
		s[i]=x;//ij相等，把x放入中间，x的左边都小于x右边都大于x
		quicksort(s,0,i-1);//对x的左边递归调用该函数
		quicksort(s,i+1,r);//对x的右边递归调用该函数
	}
}
int main() 
{	int a[10]={0}; 
    srand((unsigned)time(NULL)); 
	for(int i = 0; i < 10;i++ ) 
		a[i]=rand()%100;//生成十个随机数
	quicksort(a,0,9);//调用快速排序的函数
	for(int i=0;i<10;i++)
		cout<<a[i]<<endl;
return 0;
}
