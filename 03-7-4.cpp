/*基础编程题库集 编程题7-4 BCD解密*/

#include <stdio.h>

int main()
{
	int N;
	int a[2];

	scanf("%d",&N);

	a[0]=N/16;
	a[1]=N/16;

	if( a[0]!=0)
		printf("%d%d\n",a[0],a[1]);
	else
		printf("%d\n",a[1]);

	return 0;
}