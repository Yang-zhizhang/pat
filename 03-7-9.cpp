/*基础编程题库集 编程题7-9 用天平找小球*/

#include <stdio.h>
int main()
{
	int A,B,C;

	scanf("%d %d %d",&A,&B,&C);

	if(A==B)
		printf("C");
	else if (A==C)
		printf("B");
	else
		printf("A");

	return 0;
}