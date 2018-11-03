/*基础编程题库集 编程题7-11 分段计算居民水费*/

#include <stdio.h>

int main()
{
	float x,y;

	scanf("%f",&x);
	if(x<=15)
		y=4*x/3;
	else
		y=2.5*x-17.5;

	printf("%.2f\n",y);

	return 0;
}