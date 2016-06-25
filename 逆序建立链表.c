void CreateList_L(LinkList &L,int n){
//逆序输入n个数据元素，建立带头结点的单链表
L=(LinkList)malloc(sizeof(LNode));
L->next=NULL;//建立一个带头结点的单链表
for(i=n;i>0;--i){
	p=(LinkList)malloc(sizeof(LNode));
	//生成新结点
	scanf(&p->data);//输入元素值
	p->next=L->next;L->next=p;//插入到表头
}
}//CreateList_L
