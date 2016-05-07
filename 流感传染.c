#include<iostream>
using namespace std;
int main(){
	int m,n,sum=0;
	char a[101][101];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	cin>>m;//输入数组，天数。



	for(int k=0;k<m;k++)//m天循环m次
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='!')
					a[i][j]=='@';
			}
		}//通过两层循环把前一天感染的人全部变为感染者，让他们可以感染人。

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{
					if(i+1<n&&a[i+1][j]=='.')
						a[i+1][j]='!';
					if(i-1>=0&&a[i-1][j]=='.')
						a[i-1][j]='!';
					if(j-1>=0&&a[i][j-1]=='.')
						a[i][j-1]='!';
					if(j+1<n&&a[i][j+1]=='.')
						a[i][j+1]='!';
				}
			}
		}//通过两层循环把感染者周围的人都改为待定。第二天改为感染者。
	}//经过m天，循环结束。



	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
