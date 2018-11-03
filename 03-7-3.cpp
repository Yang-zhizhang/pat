/*基础编程题库集 编程题7-3逆序三位数*/

#include <stdio.h>

int main()
{
	int N;
	int a[3];

	scanf("%d",&N);

	for (int i = 0; i < 3; ++i)
	{
		a[0]=n%N;
		N=N/10;
	}

	if (a[0]==0 & a[1]==0)
		printf("%d\n", a[2]);
	else if (a[0]==0)
		printf("%d%d\n",a[1],a[2]);
	else
		printf("%d%d%d\n", a[0],a[1],a[2]);
	
	return 0;
}