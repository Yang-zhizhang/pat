/*基础编程题库集 基础函数题6-1 简单输出整数*/

#include <stdio.h>

void PrintN(int N);

int main()
{
	int N;

	scanf("%d",&N);
	PrintN(N);

	return 0;
}

void PrintN(int N)
{
	for (int i = 1; i <= N; ++i)
	{
		printf("%d\n",i);
	}
}