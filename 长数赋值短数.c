#include<iostream>
using namespace std;
int main(){
char char_a=' ';
int int_i=0x361;
char_a=int_i;
cout<<char_a<<endl;//把长数的低n位赋给了短数。
		return 0;
}
