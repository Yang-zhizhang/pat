/*基础编程题库集 基础函数题6-5 求自定义类型元素的最大值*/

#include <stdio.h>
#define MAXN 10
typedef float ElementType;

ElementType Max(ElementType S[],int N);

int main()
{
	ElementType S[MAXN];
	int N,i;

	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%f",&S[i]);
	}
	printf("%.2f\n",Max(S,N));

	return 0;
}

ElementType Max(ElementType S[], int N)
{
	ElementType Max;
	Max=S[0];
	for (int i = 0; i < N; ++i)
	{
		if (S[i]>Max)
			Max=S[i];
	}
	return Max;
}