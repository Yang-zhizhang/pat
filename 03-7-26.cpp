/*基础编程题目集 编程题7-26 单词长度*/

/*本解法的思路是:
遇到下一个单词时，才输出上一个单词的位数，判断条件是
统计的单词位数大于 0 且其后有空格，这时候输出的位数
有空格。这样最后一个单词（它没有下一个单词）就可以单独
输出不带空格的位数。    
输入接收到的字符分为三种：空格' ' 句号'.' 字母。详细
分情况处理*/

#include<stdio.h>
int main()
{
	int count=0,count_0=0;//count记录单词字母的个数，count_0记录空格的个数；
	char n;

	while( (n=getchar() )  != '.')
	{
		if (n == ' ')
		{
			count_0 ++;
		}
		if (n != ' ')
		{
			if (count >0 && count_0 >0)
			{
				printf("%d ", count);
				count =0;
			}
			count ++;
			count_0 =0;
			continue;
		}
	}

	if (count > 0)
	{
		printf("%d\n", count);
	}
	else
	{
		printf("\n");
	}
	return 0;
}