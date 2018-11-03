/*基础编程题库集 编程题7-10 计算工资*/

#include<stdio.h>

int main()
{
	int year;
	int hour;
	float salary;

	scanf("%d %d",&year,&hour);

	if(year<5)
	{
		if(hour<=40)
			salary=hour*30;
		else
			salary=1200+(hour-40)*30*1.5;
	}
	else
	{
		if(hour<=40)
			salary=hour*50;
		else
			salary=2000+(hour-40)*50*1.5;
	}
	printf("%.2f", salary);
	return 0;
}