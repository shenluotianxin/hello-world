#include<stdio.h>
#include<stdlib.h>
typedef struct Snode 
{
		int data;/*数据域*/ 
		struct Snode *next;/*指针域*/ 
}SNODE,* LinkStack;/*其中SNODE为链栈中的结点类型名, LinkStack为指向结点的指针类型名*/ 
//////////////////
LinkStack Push(LinkStack top,int e) 
		/*将数据元素e压入到链栈top中，使其成为新的栈项元素*/ 
{
		LinkStack p; 
		p=(LinkStack)malloc(sizeof(SNODE)); /*生成一个新的结点*/ 
		if (!p) /*如果分配空间失败，则函数返回"OVERFLOW"*/ 
				printf("Stack is Overflow\n");
		p->data=e; /*新结点的数据域赋值*/ 
		p->next=top; /*修改链使新结点插入到链表的头部,并成为新的栈顶元素*/ 
		top=p; 
		return top; 
} 
/////////////
LinkStack Pop(LinkStack top, int * e) 
		/*将链栈top中的栈顶元素从栈中删除，并用e返回其值*/ 
{
		LinkStack q; 
		if (!top) /*如果栈空，则函数返回ERROR*/ 
				printf("Stack is ERROR\n"); 
		*e=top->data; /*将被删的栈顶元素的值保存在e中*/ 
		q=top; /*用q记下待删的栈顶元素*/ 
		top=q->next; 
		/*修改链使待删结点从链中"卸下" ，此时被删结点的后继成为新的栈顶元素结点*/ 
		free(q); /*释放被删结点的存储空间*/ 
		return top;
}
/////////
LinkStack Stack_display(LinkStack top)
{
		int e;
		while(top)
		{
				e=top->data;
				printf("%4d",e);
				top=top->next;
		}
		return top;
}



int main()
{
		LinkStack top = 0; 
		int i=0,n,e; 
		printf("输入长度"); 
		scanf("%d",&n); 
		printf("输入元素：\n"); 
		while(i<n)
		{
				scanf("%d",&e);
				top=Push(top,e);
				i++;
		}
		printf("栈:\n"); 
		Stack_display(top);
		printf("插入元素:"); 
		scanf("%d",&e); 
		top=Push(top,e);
		printf("插入后:\n");
		Stack_display(top); 
		top=Pop(top,&e);
		printf("栈顶元素:%d\n",e); 
		printf("出栈:\n");
		Stack_display(top);
	}
