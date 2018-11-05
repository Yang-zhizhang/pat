/*基础编程题库集 编程题7-17 爬动的蠕虫*/

#include <stdio.h>
int main()
{
	int h=0,mins=0;
	int N,U,D;

	scanf("%d %d %d",&N,&U,&D);

	while(h<N)
	{
		mins++;
		h=h+U;
		if(h<N)
		{
			h=h-D;
			mins++;
		}
	}
	printf("%d\n", mins);
	return 0;
}