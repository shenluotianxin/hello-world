#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int (*p)[4],i,j;//p的定义为包含四个int型变量的一维数组
	p=a;
	cin>>i>>j;
	cout<<setw(4)<<*(*(p+i)+j);//也可用p[i][j];
	return 0;
}
