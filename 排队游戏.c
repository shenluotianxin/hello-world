#include <iostream>
using namespace std;

char man;
int founction(char str[], int s)
{
		int n;
		if (str[s] != man)
		{
				return s;
		} 
		else
		{
				n = founction(str, s+1);
				cout << s << ' ' << n << endl;
				return founction(str, n+1);
		}
}
int main()
{
		char str[101] = {0};
		cin >> str;
		man = str[0];
		int n = founction(str, 1);
		cout << "0 " << n << endl;  
		return 0;
}
