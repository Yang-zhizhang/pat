/*基础编程题目集 编程题7-33 有理数加法*/
#include<stdio.h>
int gcd(int x, int y);
int main()
{
	int a1,a2,b1,b2;
	int temp1,temp2,temp;

	scanf("%d/%d %d/%d",&a1,&a2,&b1,&b2);

	temp1=a1*b2+a2*b1;
	temp2=a2*b2;

	temp=gcd(temp1,temp2);
	temp1=temp1/temp;
	temp2=temp2/temp;

	if (temp2==1)
		printf("%d", temp1);
	else 
		printf("%d/%d",temp1,temp2);

	return 0;
}

int gcd(int x,int y) //最大公约数函数
{
	int r;
	while(1)
	{
		r=x%y;
		if(r == 0)
			break;

		x=y;
		y=r;
	}
	return y;
}