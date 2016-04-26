#include<iostream>
using namespace std;
int main(){
	int p,d,t,h;
	bool a[3]={0};
	bool b[4]={0};
	bool c[2]={0};
	bool e[4]={0};
	for(p=1;p<5;p++){
		for(d=1;d<5;d++){
			for(t=1;t<5;t++){
				for(h=1;h<5;h++){
				 a[0]=(d==1);
				 a[1]=(h==4);
				 a[2]=(p==3);
				 b[0]=(h==1);
				 b[1]=(d==4);
				 b[2]=(p==2);
				 b[3]=(t==3);
				 c[0]=(h==4);
				 c[1]=(d==3);
				 e[0]=(p==1);
				 e[1]=(t==4);
				 e[2]=(h==2);    
				 e[3]=(d==3);
					if(a[0]*a[1]*a[2]==0&&a[0]+a[1]+a[2]==1&&b[0]*b[1]*b[2]*b[3]==0&&b[0]+b[1]+b[2]+b[3]==1&&c[0]*c[1]==0&&c[0]+c[1]==1&&e[0]*e[1]*e[2]*e[3]==0&&e[0]+e[1]+e[2]+e[3]==1)
	{
		cout<<p<<endl;
		cout<<d<<endl;
		cout<<t<<endl;
		cout<<h<<endl;
		return 0;
		}
		}
		}
		}
		}
return 0;
}
