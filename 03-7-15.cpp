/*基础编程题库集 编程题7-15  计算圆周率*/

#include <stdio.h>
int main()
{
	double x;
	double i=2; //从第二项开始
	double temp=1, n=1, d=3, n1=2,sum=1; //n为第二项分子；d为第二项分母；n1服务阶乘

	scanf("%lf",&x);

	while (temp >=x) //当单项小于阈值时，退出循环。
	{
		temp= n/d;  //单项值变化
		sum =sum +temp;
		n=n*n1;  //分子变化
		n1++;    
		d=d*(2*i+1); //分母变化
		i++;
	}
	printf("%.6f\n", sum*2);
	return 0;
}