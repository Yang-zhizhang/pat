/*基础编程题库集 基础函数题6-7 统计某类完全平方数*/

#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N);

int main()
{
	int n1,n2,i,cnt;

	scanf("%d %d",&n1,&n2);
	cnt=0;

	for(i=n1;i<=n2;i++)
	{
		if(IsTheNumber(i))
			cnt++;
	}

	printf("cnt = %d\n",cnt);
	return 0;
}


IsTheNumber(const int N)
{
	int n,m,temp;
	n=(int)sqrt(N);
	m=N;

	if(n*n==m)
	{
		int num[10]={0};
		while(m>0)
		{
			temp=m%10;
			for (int i = 0; i < 10; ++i)
			{
				if (temp==i)
				{
					num[i]++;
					if(num[i]==2)
					{
						return 1;
					}
				}
			}
			m=m/10;
		}
		return 0;
	}
	return 0;
}
