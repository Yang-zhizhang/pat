/*基础编程题目集 编程题7-24 约分最简式*/

#include <stdio.h>
int main()
{
	int zi,mu;
	scanf("%d/%d",&zi,&mu);

	for(int i=mu;i>0;i--)
	{
		if(mu%i==0 && zi%i==0)
		{
			zi=zi/i;
			mu=mu/i;
		}
	}

	printf("%d/%d", zi,mu);

	return 0;
}
