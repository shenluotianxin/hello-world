#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define true 1
#define false 0
typedef struct Node
{
		int data;
		struct Node *pNext;
}Node,*pNode;

pNode InitList();
void DestroyList(pNode);
void ClearList(pNode);
int ListEmpty(pNode);
int ListLength(pNode);
int GetElem(pNode,int);
int LocateElem(pNode,int);
int PriorElem(pNode,int);
int pNextElem(pNode,int);
void ListInsert(pNode,int,int);
void ListDeleteOfLocation(pNode,int);
void ListTraverse(pNode);

pNode InitList()
{
		pNode pHead,pTail;
		int length,tempData,i;
		pHead = (pNode)malloc(sizeof(Node));
		if(pHead == NULL)
		{
				printf("\n**ERROR:链表初始化失败\n\n"); 
				exit(-1);
		}    
		pTail = pHead;
		pTail->pNext = NULL;
		printf("\n**请输入链表数据，个数为："); 
		scanf("%d",&length); 
		for(i = 0; i < length; i++)
		{
				printf("\n****input:请输入第%d个数据:",i+1); 
				scanf("%d",&tempData);
				pNode pNew = (pNode)malloc(sizeof(Node));
				if(pHead == NULL)
				{
						printf("\n**ERROR:链表创建失败\n\n"); 
						exit(-1);
				}        
				pNew->data = tempData;
				pTail->pNext = pNew; 
				pNew->pNext = NULL;
				pTail = pNew;
		}
		printf("\n**Success:链表已成功创建\n");
		return pHead;
}

void DestroyList(pNode pHead)
{
		pNode temp = NULL;                                         
		int i = ListLength(pHead);                                 
		while(i--)                                                
		{
				temp = pHead;                                           
				pHead = pHead->pNext;
				free(temp);
		}
		free(pHead);                                                                          
		printf("\n**Success:链表已成功删除\n");
}

void ClearList(pNode pHead)
{
		int length = ListLength(pHead);
		pNode p = pHead->pNext;
		while(p != NULL)
		{
				p->data = 0;
				p = p->pNext;
		}
		printf("\n**Success:链表数据已清零\n");
}

int ListEmpty(pNode pHead)
{
		if(ListLength(pHead) == 0)
				return true;
		else
				return false;
}

int ListLength(pNode pHead)
{
		pNode p = pHead->pNext;
		int length = 0;
		while(p != NULL)
		{
				++length;
				p = p->pNext;
		}
		return length;
}

int GetElem(pNode pHead,int locate)
{
		int length = ListLength(pHead);
		pNode p = pHead->pNext;
		int locateNow = 1;
		while(p)
		{
				if(locateNow == locate)
						return p->data;
				else
				{
						p = p->pNext;
						locateNow++;
				}
		}
		printf("\n**ERROR:数据不存在\n"); 
		return -1;
}

int LocateElem(pNode pHead,int num)
{
		int length = ListLength(pHead);
		pNode p = pHead->pNext;
		int locateNow = 1;
		while(p)
		{
				if(p->data == num)
				{
						return locateNow;
				}
				else
				{
						locateNow++;
						p = p->pNext;
				}
		}
}

int PriorElem(pNode pHead,int num)
{
		return GetElem(pHead,LocateElem(pHead,num)-1);
}

int pNextElem(pNode pHead,int num)
{
		return GetElem(pHead,LocateElem(pHead,num)+1);
}

void ListInsert(pNode pHead,int locate,int num)
{
		pNode p = pHead->pNext;
		pNode s;
		if(locate == 1)
		{
				s = (pNode)malloc(sizeof(Node));
				s->data = num;
				s->pNext = pHead;
				pHead = s;
				printf("\n**Success:数据插入成功！\n");
		}
		else
		{
				s = (pNode)malloc(sizeof(Node));
				s->data = num;
				int locate2 = locate - 1;
				while(--locate2)
				{
						p = p->pNext;
				}
				s->pNext = p->pNext;
				p->pNext = s;
				printf("\n**Success:数据插入成功！\n");
		}


}

void ListDeleteOfLocation(pNode pHead,int locate)
{
		pNode p = pHead->pNext;
		pNode s;
		if(locate == 1)
		{
				s = pHead;
				if(pHead != NULL)
						pHead = pHead->pNext;
				free(s);
				printf("\n**Success:数据删除成功！\n");
		}
		int locate2 = locate - 1;
		while(--locate2)
		{
				p = p->pNext;
		}
		if(p->pNext->pNext == NULL)
		{
				s = p->pNext;
				p->pNext = NULL;
				free(s);
				printf("\n**Success:数据删除成功！\n");
		}
		else
		{
				s = p->pNext;
				p->pNext = p->pNext->pNext;
				free(s);
				printf("\n**Success:数据删除成功！\n");
		}

}

void ListTraverse(pNode pHead)
{
		pNode p = pHead->pNext;
		if(p != NULL)
				printf("\n**Success:链表数据遍历：\n");
		else
				printf("\n**ERROR:链表内无数据\n");
		while(p != NULL)
		{
				printf("%d ",p->data);
				p = p->pNext;
		}
		printf("\n");
}

int main()
{
		pNode pHead = NULL;
		pHead = InitList();
		//printf("%d\n",GetElem(pHead,4));
		//printf("%d\n",LocateElem(pHead,10));
		ListTraverse(pHead);
		//ListInsert(pHead,3,10); 
		//ListDeleteOfLocation(pHead,4);
		//ListTraverse(pHead);
		//printf("%d\n",PriorElem(pHead,4));
		//printf("%d\n",pNextElem(pHead,4));
		//if(ListEmpty(pHead))
		//    printf("\n**链表为空\n");
		//printf("%d\n",ListLength(pHead));
		//ClearList(pHead);
		//ListTraverse(pHead);
		//if(ListEmpty(pHead))
		//    printf("\n**链表为空\n");
		//DestroyList(pHead);
		//ListTraverse(pHead);
		//if(ListEmpty(pHead))
		//    printf("\n**链表为空\n");

}
