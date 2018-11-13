/*基础编程题目集 编程题7-27 冒泡法排序*/

#include<stdio.h>
#define MAX 101
int main()
{
	int A[MAX]={0};
	int N,K;
	int temp;

	scanf("%d %d",&N,&K);
	for( int count =0; count <N; count++)
	{
		scanf("%d",&A[count]);
	}

	for (int i = 0; i < K; ++i)
	{
		for(int j=0; j<N-i-1; j++)
		{
			if (A[j] > A[j+1])
			{
				temp=A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}
		}
	}

	for( int i=0; i<N-1; i++)
	{
		printf("%d ", A[i]);
	}
	printf("%d",A[N-1]);

	return 0;
}
 /*
#include<stdio.h>
int main()
{
  int N,K;
  scanf("%d %d",&N,&K);
  int a[100];
  int temp;
  
  for(int i=0; i<=N; i++)
    scanf("%d",&a[i]);
  
  while(K--)
  {
      for(int i=1; i<N; i++)
      {
        if (a[i-1]>a[i])
         {
            temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
          }
      }
  }
  
  for(int i=0; i<N-1;i++)
    printf("%d ",a[i]);
    
  printf("%d",a[N-1]);
  return 0;
}
*/