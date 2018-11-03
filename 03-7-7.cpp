/*基础编程题库集 编程题7-7 12-24小时制*/

#include <stdio.h>

int mian()
{
	int hour,mins;
	char ch;

	scanf("%d%c%d",&hour,&ch,&mins);

	if(hour>12)
		printf("%d:%d PM",hour-12,mins);
	else if(hour ==12)
		printf("%d:%d PM",hour,mins);
	else
		printf("%d:%d AM",hour,mins);

	return 0;
}