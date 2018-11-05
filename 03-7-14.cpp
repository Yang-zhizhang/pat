/*基础编程题库集 编程题7-14  求整数段和*/

//自编
#include<stdio.h>
int main()
{
  int A,B;
  
  scanf("%d %d",&A,&B);
  int Sum=0;
  int count=0;
  
  for(int i=A; i <= B; i++)
  {
    Sum=Sum+i;
    printf("%5d",i);
    count++;
    if (count%5==0 && i!=B)    //法二 if(count%5==0 || i==b)
    printf("\n");
  }

  printf("\nSum = %d",Sum);    //接法二   printf("Sum = %d",Sum);
  return 0;
}

//参考
#include<stdio.h>
int main()
{
    int a,b,i,cot=0,sum=0;//添加计数器
    scanf("%d %d",&a,&b);//输入区间

    //以a为起点，如果a小于b，每次a累加1
    for(i=a;i<=b;i++){
        printf("%5d",i);//题目要求占5个字符宽
        cot++;//每输出一次，计数器累加1
        if(cot%5==0&&i!=b)//如果当前计数器的值能被5整除那么换行
            printf("\n");
            }
       printf("\n");//执行完循环后，换行输入总和
   for(i=a;i<=b;i++)
        sum+=i;
   printf("Sum = %d",sum);

   return 0;

}