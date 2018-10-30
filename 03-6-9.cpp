/*基础编程题库集 基础函数题6-9 统计个位数字*/

#include <stdio.h>
int Count_Digit(const int N,const int D);

int main()
{
	int N,D;

	scanf("%d %d",&N,&D);

	printf("%d\n", Count_Digit(N,D));

	return 0;
}

int Count_Digit(const int N,const int D)
{
	int num[10]={0};
	int temp=N;
	int i;

	if (temp == 0)
		num[0]=1;
	if (temp < 0)
		temp = -temp;

	while (temp!=0)
	{
		i=temp%10;
		num[i]++;
		temp=temp/10;
	}

	return num[D];
}