#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float s[6];
	int ID,n;
	char b;
    float c;
    for (int i = 0; i < 3; i++){
         cin >> ID;
         cin >> n;
         for (int j = 0; j < n;j++){
             cin >> b;
             cin >> c;
             if (b == 'A') {
                s[ID- 1] += c;
                s[3] += c;
             }
             else if (b == 'B') {
                 s[ID - 1] += c;
                 s[4] += c;
             } 
             else if (b == 'C') {
                 s[ID - 1] += c;
                 s[5] += c;
             }    
         }
		 }
  for(int i=0;i<3;i++){
  cout<<i+1<<' '<<setprecision(2)<<fixed<<s[i]<<endl;}
  cout<<'A'<<' '<<s[3]<<endl;
  cout<<'B'<<' '<<s[4]<<endl;
  cout<<'C'<<' '<<s[5]<<endl;
return 0;
}
