/*基础编程题目集 编程题7-25 念数字*/

#include <stdio.h>

int main()
{
	int n;
	int s[1001];
	int i=0;
	scanf("%d",&n);

	if(n==0)
		printf("ling\n");
	else 
	{
		if (n<0)
			{
				n=-n;
				printf("fu ");
			}

		while( n>0 )
			{
				s[i]=n%10;
				n=n/10;
				i++;
			}
		for( i=i-1; i>=0; i--)
			{
				if( s[i]==0)
					printf("ling");
				else if(s[i]==1)
					printf("yi");
				else if(s[i]==2)
					printf("er");
				else if(s[i]==3)
					printf("san");
				else if(s[i]==4)
					printf("si");
				else if(s[i]==5)
					printf("wu");
				else if(s[i]==6)
					printf("liu");
				else if(s[i]==7)
					printf("qi");
				else if(s[i]==8)
					printf("ba");
				else if(s[i]==9)
					printf("jiu");

				if(i)
					printf(" ");
				else
					printf("\n");
			}
	}
	
	return 0;
}
