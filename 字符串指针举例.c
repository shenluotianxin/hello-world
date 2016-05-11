#include <iostream> 
#include<iomanip>
using namespace std; 
int main()
{
	char buffer[10]="ABC";
	char *pc;
	pc="hello";
	cout<<pc<<endl;//此时pc指向h
	pc++;
	cout<<pc<<endl;//此时pc指向e
	cout<<*pc<<endl;//把pc指向的那个元素输出
	pc=buffer;//用指针赋值指针，没有瑕疵。
	cout<<pc;//指针指向了A
return 0;
}
