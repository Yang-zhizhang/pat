/*基础编程题库集 基础函数题6-2 多项式求值*/

#include <stdio.h>

#define MAXN 10

double f(int n,double a[], double x);

int main()
{
	int n,i;
	double a[MAXN],x;

	scanf("%d %lf",&n,&x); /*n表示阶数，x表示未知数x的值*/

	for (i = 0; i <=n ; ++i)
	{
		scanf("%lf",&a[i]); /*a[i]表示系数*/
	}

	printf("%.1f\n",f(n,a,x) );

	return 0;
}


double f(int n, double a[], double x)
{
  double temp=1,sum=0;
  int i=0;
  for(i;i<=n;i++)
  {
    sum=sum+a[i]*temp;
    temp=temp*x;    /*temp依次保存x的i阶中间数值，以便下一阶计算*/
  }
  return sum;
}