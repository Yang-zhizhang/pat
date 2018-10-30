/*基础编程题库集 基础函数题6-8 简单阶乘计算*/

#include <stdio.h>

int Factorial(const int N);

int main()
{
	int N,NF;
	scanf("%d",&N);

	NF=Factorial(N);
	if(NF)
		printf("%d!= %d\n",N,NF);
	else
		printf("Invalid input\n");

	return 0;
}

int Factorial(const int N)
{
	if(N<0)
		return 0;
	else
	{
		int result=1;

		for (int i = ; i <=N ; ++i)
		{
			result = result*i;
		}
		return result;
	}
}