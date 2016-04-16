#include<iostream>
using namespace std;
int main(){ 
  char a [1000];
  int b[1000]={0},j=0;
  cin.getline(a,1000);
  for(int i=0;a[i]!='.';i++){
  		if(a[i]!=' ')
		  b[j]++;
		else if(a[i]==' ')
		  j++;
		  }
  int max=0;
  for(int i=0;i<1000;i++)
    {
	  if(b[i]>max)
	    max=b[i];
		}//找出来最长单词的长度。

  int l=0;//定义单词的长度，找到第一个符合max的
  for(int i=0;a[i]!='.';i++)
  {
     l++;
	 if(a[i]==' ')
	   l=0;
	   
	 else if(l==max)
		 {
		        int k=0;
		 		for(k=i-l+1;k<=i;k++)
				   cout<<a[k];
				   return 0;
				   }
		  }
  return 0;
  }

