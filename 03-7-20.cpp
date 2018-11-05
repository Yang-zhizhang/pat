/*基础编程题库集 编程题7-20 打印九九口诀表*/

#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);

	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(i*j<10)
				printf("%d*%d=%d   ", j,i,i*j);
			else
				printf("%d*%d=%d  ", j,i,i*j);
		}
	printf("\n");
	}
	return 0;
}