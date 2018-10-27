/*基础编程题库集 基础函数题6-6 求单链表结点的阶乘和*/

#include <stdio.h>
#include <stdlib.h>
typedef struct Node *PrtToNode;

struct Node
{
	int Data;
	PrtToNode Next;	
};
typedef PrtToNode List;

int FactorialSum(List L);

int main()
{
	int N,i;
	List L,P;

	scanf("%d",&N);
	L=NULL;
	for (i = 0; i < N; ++i)
	{
		p=(List)malloc(sizeof(struct Node));
		scanf("%d",&p->Data);
		p->Next=L;
		L=p;
	}
	printf("%d\n", FactorialSum(L));

	return 0;
}

int fun(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}else{
		return n*fun(n-1);
	}
}
int FactorialSum(List)
{
	int sum=0;
	while(L!=NULL)
	{
		int m=fun(L->Data);
		sum=sum+m;
		L=L->Next;
	}
	return sum;
}