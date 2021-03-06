#include "stdio.h"
#include "malloc.h"
#include "string.h"
#include "stdlib.h"
#define Max 20         //结点的最大个数
typedef struct BinTNode{
		char data;
		struct BinTNode *lchild,*rchild;
}BinTNode,*BinTree;            //自定义二叉树的结点类型
//定义二叉树的指针
int NodeNum,leaf;            //NodeNum为结点数，leaf为叶子数

//==========以广义表显示二叉树==============
void DisTree(BinTree T)
{
		if(T)
		{
				printf("%c",T->data);
				if((T->lchild)||(T->rchild))
				{
						if(T->lchild)
						{
								printf("%c",'(');
								DisTree(T->lchild);
						}
						if(T->rchild)
						{
								printf("%c",',');
								DisTree(T->rchild);
								printf("%c",')');
						}
				}
		}
}
//==========基于先序遍历算法创建二叉树==============
//=====要求输入先序序列，其中加入虚结点"#"以示空指针的位置==========
BinTree CreatBinTree(BinTree T)
{
		char ch; 
		ch=getchar(); 
		if(ch=='#') 
				T=NULL; 
		else
		{ 
				if(!(T=(BinTNode *)malloc(sizeof(BinTNode)))) 
						printf("Error!"); 
				T->data=ch; 
				T->lchild=CreatBinTree(T->lchild); 
				T->rchild=CreatBinTree(T->rchild); 
		} 
		return T;  
}
//========NLR 先序遍历=============
void Preorder(BinTree T)
{
		if(T)
		{ 
				printf("%c",T->data);
				Preorder(T->lchild);
				Preorder(T->rchild); 
		} 
}
//========LNR 中序遍历===============
void Inorder(BinTree T)
{
		if(T){
				Inorder(T->lchild);
				printf("%c",T->data);
				Inorder(T->rchild);
		} 
}
//==========LRN 后序遍历============
void Postorder(BinTree T)
{
		if(T){
				Postorder(T->lchild);
				Postorder(T->rchild);
				printf("%c",T->data);
		} 
}
//=====采用后序遍历求二叉树的深度、结点数及叶子数的递归算法========
int TreeDepth(BinTree T)
{
		int hl,hr,max;
		if(T){
				hl=TreeDepth(T->lchild);    //求左深度
				hr=TreeDepth(T->rchild);    //求右深度
				max=hl>hr? hl:hr;           //取左右深度的最大值
				NodeNum=NodeNum+1;         //求结点数
				if(hl==0&&hr==0)
						leaf=leaf+1;  //若左右深度为0，即为叶子。
				return(max+1);
		}
		else return(0);
}
//====利用"先进先出"（FIFO）队列，按层次遍历二叉树==========
void Levelorder(BinTree T)
{
		int front=0,rear=1;
		BinTNode *cq[Max],*p;   //定义结点的指针数组cq
		cq[1]=T;                //根入队
		while(front!=rear)      
		{
				front=(front+1)%NodeNum;
				p=cq[front];            //出队
				printf("%c",p->data);     //出队，输出结点的值 
				if(p->lchild!=NULL){
						rear=(rear+1)%NodeNum;
						cq[rear]=p->lchild;     //左子树入队
				}
				if(p->rchild!=NULL){
						rear=(rear+1)%NodeNum;
						cq[rear]=p->rchild;     //右子树入队
				}
		}
}
//==========主函数=================
main()
{
		BinTree T,root;
		int i,depth;
		printf("\n");
		printf("输入完全二叉树的先序序列,用#代表虚结点:"); //输入完全二叉树的先序序列，
		// 用#代表虚结点，如ABD###CE##F##
		root=CreatBinTree(T);       //创建二叉树，返回根结点
		DisTree(root);
		printf("\n");
		printf("先序遍历: ");
		Preorder(root);      //先序遍历
		printf("\n");
		printf("中序遍历: ");
		Inorder(root);      //中序遍历
		printf("\n");
		printf("后序遍历: ");
		Postorder(root);    //后序遍历
		printf("\n");
}
