/*基础编程题库集 编程题7-19 支票面额*/
#include <stdio.h>
int main()
{
	int n,f,y,isFound=0;

	scanf("%d",&n);
	//100*f + y - n == 200*f +2*f --> 98*f - 199*y == n   试解方法
	//题目隐含信息y和f为不超过100的整数
	for(int f=0; f <= 100 && !isFound; f++)
	{
		for(int y=0; y <= 100; ++y)
		{
			if (98*f - 199*y == n)
			{
				printf("%d.%d",y,f);
				isFound =1;
				break;
			}
		}
	}

	if(!isFound)
		printf("No Solution");

	return 0;
}