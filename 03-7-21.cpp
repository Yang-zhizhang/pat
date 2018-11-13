/*基础编程题目集 编程题7-21 求特殊方程的正整数解*/

#include<stdio.h>
#include<math.h>

int main()
{
	int N;
	int flag=1;

	scanf("%d",&N);

	for (int i = 1; i < sqrt(N); ++i)
	{
		for (int j = i; j < sqrt(N); ++j)
		{
			if( i*i+j*j == N)
			{
				printf("%d %d\n",i,j);
				flag =0;
			}
		}
	}
	if(flag)
		printf("No Solution");

	return 0;
}