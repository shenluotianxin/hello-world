#include <iostream>
using namespace std;
struct weapon
{
	int price;
	int atk;
	weapon *next;
};
int main()
{
	weapon a,b,c,*head;
	a.price=100;
	a.atk=100;
	b.price=200;
	b.atk=200;
	c.price=300;
	c.atk=300;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	

	weapon *p;
	p=head;
	while(p!=NULL)
	{
		cout<<p->price<<' '<<p->atk<<endl;
		p=p->next;
	}
	return 0;
}
	
