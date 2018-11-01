/*基础编程题库集 编程题7-1 厘米换算英尺英寸*/

#include <stdio.h>

int main()
{
	int foot,inch;
	int meter;

	scanf("%d",&meter);

	foot=meter/30.48;
	inch=(meter-foot*30.48)/30.48*12;

	printf("%d %d\n", foot, inch);

	return 0;
}