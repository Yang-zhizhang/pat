/*基础编程题库集 编程题7-16 求符合给定条件的整数集*/

#include <stdio.h>
int main()
{
	int a,x,y,z;
	scanf("%d",&a);
	int count =0;

	for(x=a; x<a+4; x++)
	{
		for(y=a; y<a+4; y++)
		{
			for(z=a; z<a+4; z++)
				if (x!=y && x!=z && y!=z)
				{
					printf("%d%d%d",x,y,z);
					count++;
					if(count%6==0)
						printf("\n");
					else
						printf(" ");
				}
		}
	}
return 0;
}