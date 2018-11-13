/*基础编程题目集 编程题7-38 数列求和-加强版*/
#include<stdio.h>

int main () 
{
    int A, N;
    scanf ("%d %d", &A, &N);
    
    if (N == 0) {
        printf("0\n");
        return 0;
    }
    
    int n[N]; // 用来存放最终结果 
    int j = 0, last = 0; // j 是数组 n 的指针 

    for (int i=N; i>=1; i--) {
        n[j++] = (i * A  + last) % 10;
        last = (i * A + last) / 10;         
    }
    
    if (last > 0) {
            printf("%d", last); // 将最后一次进位输出 
    }
    for (j=j-1; j>=0; j--) {
        printf("%d", n[j]); 
    }
    printf("\n");
    
    return 0;
}
