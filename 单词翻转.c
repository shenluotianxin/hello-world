#include<iostream>
using namespace std;
int f(char c[],int i)
{
	if(c[i]=='\0')
		return 0;
	else
		f(c,i+1);
	cout<<c[i];
	return 0;
}
int main()
{
	char a[500],b[500];
	cin.getline(a,500);
	int j=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			b[j]='\0';
			f(b,0);
			cout<<' ';
			j=0;
		}
		else
		{
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	f(b,0);
	cout<<endl;
return 0;
}
