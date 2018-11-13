/*基础编程题目集 编程题7-34 通讯录的录入与显示*/

#include<stdio.h>

struct log
{
	char name[11]; //最后的位置存放结束符'\0'；
	char birth[11];
	char sex;
	char tell[17];
	char phone[17];
};

void input(struct log b[], int n);
void output(struct log c[], int n);

int main()
{
	int n;
	scanf("%d",&n);
	struct log a[11];
	input(a,n);
	output(a,n);

	return 0;
}

void input(struct log b[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		scanf("%s %s %c %s %s",b[i].name,b[i].birth,&b[i].sex,b[i].tell,b[i].phone);

	}
}

void output(struct log c[],int n)
{
	int m;
	scanf("%d",&m);
	int a[11];
	for (int i = 0; i < m; ++i)
		{
			scanf("%d",&a[i]);
		}	
	for (int i = 0; i < m; ++i)
	{
		if(a[i]<n && a[i]>=0)
		{
			printf("%s %s %s %c %s\n", c[a[i]].name,c[a[i]].tell,c[a[i]].phone,c[a[i]].sex,c[a[i]].birth);
		}
		else
		{
			printf("Not Found\n");
		}
	}
}