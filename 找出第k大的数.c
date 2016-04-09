#include<iostream>
using namespace std;
int main(){
 int a[1000],n,b[1000]={0},k;//b[1000]用了存储有几个数比a[i]大
 cin>>n;
 cin>>k;//k表示输出第几大的数
 for(int i=0;i<n;i++)
 cin>>a[i];
 for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
	   {
	     if(i!=j&&a[i]<a[j])
		   b[i]++;
		   }
		   }//对b[i]赋值，使其与a[i]一一对应
  

//在循环中找到对应k-1的b[i]
 for(int i=0;i<n;i++)
  {
    if(b[i]==k-1)
	  cout<<a[i]<<endl;
	  }
return 0;
}




 

