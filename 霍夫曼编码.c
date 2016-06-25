#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#define  OVERFLOW -1

using namespace std;
typedef struct {
		char letter;
		float weight;
		int parent,lchild,rchild;
}HTNode,*HuffmanTree;

typedef char * *HuffmanCode;

void Select(HuffmanTree &HT,int i,int &s1,int &s2)
{
		int j, k;
		for(k = 1; k < i; k++)
		{
				if(HT[k].parent != NULL)
						continue;
				s1 = k;
				break;
		}
		for(j = 1; j < i; j++)
		{
				if(HT[j].parent != NULL)    continue;
				if(HT[j].weight < HT[s1].weight)    s1 = j;
		}
		for(k = 1; k <= i; k++)
		{
				if(HT[k].parent != NULL || k == s1)    continue;
				s2 = k;   break;
		}
		for(j = 1; j < i; j++)
		{
				if(HT[j].parent != NULL)    continue;
				if(HT[j].weight <= HT[s2].weight && j != s1)    s2 = j;
		}
}

void  HuffmanCoding(HuffmanTree &HT,HuffmanCode &HC,char *zi,double *w,int n)
{
		HuffmanTree p;
		int m,i,s1,s2,f,r;
		int Istart = 1;
		char *cd;
		if(n <= 1)
				return;
		m = 2*n-1;
		if(!(HT=(HuffmanTree)malloc((m+1)*sizeof(HTNode))))   exit(OVERFLOW);
		for(p=HT+1,i=1;i<=n;++i,++zi,++p,++w)
		{
				p->parent = NULL;
				p->letter = *zi;
				p->lchild = NULL;
				p->rchild = NULL;
				p->weight = *w;
		}
		for(;i<=m;++i,++p)
		{
				(*p).weight=0;
				(*p).parent=0;
				(*p).lchild=0;
				(*p).rchild=0;
		}
		for(i=n+1;i<=m;++i)
		{
				Select(HT,i-1,s1,s2);
				HT[s1].parent=i;
				HT[s2].parent=i;
				HT[i].lchild=s1;
				HT[i].rchild=s2;
				HT[i].weight=HT[s1].weight+HT[s2].weight;
		}
		HC=(HuffmanCode)malloc((n+1)*sizeof(char *));
		cd=(char*)malloc(n*sizeof(char));
		cd[n-1]='\0';
		for(i=1;i<=n;++i)
		{
				Istart = n - 1;
				for(r= i, f = HT[i].parent; f != 0; r= f, f = HT[f].parent)
						if(HT[f].lchild == r)      cd[--Istart] = '0';
						else        cd[--Istart] = '1';
				HC[i] = (char *)malloc((n - Istart) * sizeof(char));
				strcpy(HC[i], &cd[Istart]);
		}
		free(cd);
}

int main()
{
		HuffmanTree HT;
		HuffmanCode HC;
		int i,j,yu;
		char c[100];
		char  zi[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
		double w[27]={8.19 ,1.47 ,3.83 , 3.91 , 12.25 , 2.26 , 1.71, 4.57 , 7.10 , 0.14 ,0.41 , 3.77 ,3.34 ,7.06, 7.26 , 2.89 , 0.09 , 6.85 , 6.36 ,9.41, 2.58 ,1.09 ,1.59 , 0.21 , 1.58  ,0.08 ,9.11};
		HuffmanCoding(HT,HC,zi,w,29);
		printf("please input the text:");
		gets(c);
		printf("The  code   is:");
		for(i=0; i<strlen(c);  i++)
		{
				if(c[i]!=' ')    printf("%s",HC[(c[i] - 'A' + 1)]);
				else    printf("%s",HC[27]);
		}
		printf("\n");
		printf("Enter the code:");
		gets(c);
		printf("%s\n",c);

		//scanf("%s",c);
		//cin>>c;
		j=strlen(c);


		yu=57;
		i=0;
		cout<<"The text is:";

		while(HT[yu].lchild != 0)
		{
				while(i < j)
				{
						if(HT[yu].lchild == 0 && HT[yu].rchild == 0)  break;
						if(c[i] == '0')
						{
								yu = HT[yu].lchild;
								i++;
								//printf("0done! ");
								//printf("%s", HT[yu].letter);
								continue;
						}
						if(c[i]== '1')
						{
								yu=HT[yu].rchild;
								i++;     
								//printf("1done!");	

								continue;
						}
				}
				printf("%c", HT[yu].letter);
				yu = 57;
				if(i==j)  break;
				//	printf("%d",yu);
		}

		printf("\n");
	}
