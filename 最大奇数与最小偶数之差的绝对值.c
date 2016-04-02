#include<iostream>
using namespace std;
int main(){
 int a[6];
 for(int i=0;i<6;i++)
 {
 	cin>>a[i];
	}
 int l=0,r=6;
 while (l<=r){
  bool left=a[l]%2==1;
  bool right=a[r]%2==0;
  if(left){
  l++;
  }else if(right){
  r--;
  }else if(!left&&!right){
  int temp =a[l];
  a[l]=a[r];
  a[r]=temp;
  }
 }
 
