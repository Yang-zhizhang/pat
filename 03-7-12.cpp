/*基础编程题库集 编程题7-11 分段计算居民水费*/

#include<stdio.h>
int main()
{
	int a,b;
	char c;

	scanf("%d %c %d",&a,&c,&b);

	switch(c)
	{
		case '+':
			printf("%d", a+b);
			break;
		case '-':
			printf("%d", a-b);
			break;
		case '*':
			printf("%d", a*b);
			break;
		case '/':
			printf("%d", a/b);
			break;
		case '%':
			printf("%d", a%b);
			break;
		default:
			printf("ERROR");
	}
	return 0;
}