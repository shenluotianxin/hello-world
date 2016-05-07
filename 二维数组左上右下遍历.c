#include<iostream>
using namespace std;
int main()
{
	int array[100][100]={0};
	int row,col;
	cin>>row>>col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>array[i][j];
		}
	}
	for(int k=0;k<=row+col-1;k++)
	{
		for(int i=0;i<=k;i++)
		{
			if(i<=row-1&&k-i<=col-1)
			{
				cout<<array[i][k-i]<<endl;
			}
			else
			continue;
		}
	}
return 0;
}
