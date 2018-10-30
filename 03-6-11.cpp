/*基础编程题库集 基础函数题6-11 求自定类型元素序列的中位数*/

#include <stdio.h>
#define MAXN 10
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
	ElementType A[MAXN];
	int N,i;

	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%f",&A[i]);

	printf("%.2f\n",Median(A,N));

	return 0;
}

//希尔排序
ElementType Median(ElementType A[],int N)
{
	int i,j,Increment;
	ElementType Temp;

	for(Increment=N/2;Increment>0;Increment=Increment/2)
	{
		for(i =Increment;i<N; i++)
		{
			Temp=A[i];
			for(j=i;j>=Increment;j=j-Increment)
			{
				if (Temp<A[j-Increment])
					A[j]=A[j-Increment];
				else
					break;
			}
			A[j]=Temp;
		}
	}
	return A[N/2];
} 