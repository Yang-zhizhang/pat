/*基础编程题目集 编程题7-28 猴子选大王*/
//不懂，copy他人的。   约瑟夫环问题
/*
回溯法是：将猴子总个数循环，第一次循环都是将当前需要出圈的猴子排到数组末尾。
这样，当全部猴子循环一遍后，数组头的猴子即为猴王。从数组尾开始向头循环输出，
即为猴子出圈序列
*/

#include<stdio.h>
int main()
{
	int i, j, k, temp;
	int monkey[1001];//总数不能大于1000
	unsigned int n;

	scanf("%d", &n);//输入猴子总数

	for (i = 0; i < n; i++)
	{
		monkey[i] = i + 1;//给猴子排序，站成一排
	}

	for (i = n - 1; i >= 0; i--)
	{
		for (k = 1; k <= 3; k++)
		{
			temp = monkey[0];
			for (j = 0; j < i; j++)
			{
				monkey[j] = monkey[j + 1];
			}
			monkey[i] = temp;
		}
	}
	printf("%d", monkey[0]);//数组头就是猴王
	return 0;
}