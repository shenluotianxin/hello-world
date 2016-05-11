#include <iostream> 
using namespace std; 
unsigned long int f(int n)//定义一个函数
{
	if(n==1)
		return 1;
	else
		return n*f(n-1);//递归调用这个函数，达到阶乘的目的
}
int main()
{
	int n;
	cin>>n;//输入实参直接调用函数输出结果。
	cout<<f(n)<<endl;
return 0;
}
