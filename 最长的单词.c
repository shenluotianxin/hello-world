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

  int len=0;
  for(int i=0;a[i]!='.';i++)
  {
  		len++;
		if(len==max)
		 {
		 		for(int k=i-len+1;k<=i;k++)
				   cout<<a[k];
				   return 0;
				   }
		else if(a[i]==' ')
		  len=0;
		  }
  return 0;
  }

