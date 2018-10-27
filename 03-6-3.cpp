/*基础编程题库集 基础函数题6-3 简单求和*/

#include <stdio.h>
#define MAXN 10

int Sum(int List[],int N);

int main()
{
	int List[MAXN],N,i;

	scanf("%d",&N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d",&List[i]);
	}

	printf("%d\n",Sum(List,N) );

	return 0;
}

int Sum(int list[],int N)
{
  int sum=0;
  for(int i=0; i<N ; i++)
  {
    sum=list[i]+sum;
  }
  return sum;
}