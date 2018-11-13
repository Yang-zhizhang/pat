/*基础编程题目集 编程题7-13 日K蜡烛图*/

#include<stdio.h>
int main()
{
    double open,close,high,low;
    scanf("%lf %lf %lf %lf",&open,&high,&low,&close);

    {
        if(close<open)
        printf("BW-Solid");
    else if(close>open)
        printf("R-Hollow");
    else
        printf("R-Cross");
    }

    {//上下影线都存在的情况，记得加上前面的空格
    if((low<open&&low<close)&&(high>open&&high>close))
        printf(" with Lower Shadow and Upper Shadow");
     //下影线
    else if(low<open&&low<close)
        printf(" with Lower Shadow");
    //上影线
    else if(high>open&&high>close)
        printf(" with Upper Shadow");

    }
        return 0;
}
--------------------- 
作者：土木系码农 
来源：CSDN 
原文：https://blog.csdn.net/qq_32999795/article/details/53750065 
版权声明：本文为博主原创文章，转载请附上博文链接！