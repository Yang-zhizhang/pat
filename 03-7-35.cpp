/*基础编程题目集 编程题7-35 有理数均值*/

#include<stdio.h>
int gcd(int p,int q)
{
	if(q==0) return p;
	int r=p%q;
	return gcd(q,r);
}

int main()
{
	int N,sumA=0,sumB=1; //sumA/sumB=0;
	scanf("%d",&N);

	for(int i=0; i<N; i++)
	{
		int a,b;
		scanf("%d/%d",&a,&b);//a是分子，b是分母；形如 sumA/sumB + a/b形式；
		sumA =sumA*b+a*sumB;
		sumB =sumB*b;  

		if(i==N-1)  sumB =sumB*N;  //求N项有理数的均值，通过分母乘以N；

		int divisor =gcd(sumA,sumB);
		sumA= sumA/divisor;
		sumB= sumB/divisor;
	}

	if(sumA ==0)
		printf("0");
	else if (sumB == 1)
		printf("%d",sumA);
	else
		printf("%d/%d",sumA,sumB);

	return 0;
}

