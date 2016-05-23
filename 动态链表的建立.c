#include <iostream>
#include<malloc.h>
using namespace std;
struct weapon
{
	int price;
	int atk;
	weapon *next;
};//建立结构体


weapon *create()
{
	weapon *head;
	weapon *p1;
	weapon *p2;
	int n=0;
	p1=(weapon*)malloc(sizeof(weapon));//(weapon*)把sizof函数强制赋值为此类型
	p2=(weapon*)malloc(sizeof(weapon));//(weapon*)把sizof函数强制赋值为此类型
	cin>>p1->price>>p1->atk;
	//scanf("%d,%d",&p1->price,&p1->atk);
	head=NULL;
	while(p1->price!=0)
	{
		n++;
		if(n==1) 
			head=p1;//把head给第一个
		else
		p2->next=p1;//把两个节点串起来

		p2=p1;//保留p2为上一个节点的next指针
		p1=(weapon*)malloc(sizeof(weapon));//再开辟一个空间用p1指向
	cin>>p1->price>>p1->atk;
	//scanf("%d,%d",&p1->price,&p1->atk);
	}//输入价格为0 循环结束 链表创建完成
	p2->next=NULL;
	return(head);
}


int main()
{
	weapon *p;
	p=create();//指向head
	while(p!=NULL)
	{
		cout<<p->price<<' '<<p->atk<<endl;
		//printf("%d,%d",p->price,p->atk);
		p=p->next;
	}
	return 0;
}
