/*基础编程题目集 编程题7-30 字符串的冒泡排序*/

#include<stdio.h>
#include<string.h>

int main ()
{
    int N, K;
    scanf("%d %d\n", &N, &K); //要输入一个回车，不然 gets 会得到一个回车，转为\0 存入第一个字符串中 
    int i;
    char s[N][11]; // 10 个用来存放字符，1 个用来存放结束符 \0 
    for (i=0; i<N; i++) {
        gets(s[i]);
    }
    
    int j;
    char temp[11];
    for (i=1; i<N; i++) {
        for (j=0; j<N-i; j++) {
            if (strcmp(s[j], s[j+1]) > 0) {
                strcpy(temp, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], temp);
            }
        }
        if (i == K) {
            for (i=0; i<N; i++) {
                puts(s[i]);
            }
            break;
        }
    }
        
    return 0; 
}
//方法二： 
#include<stdio.h>
#include<string.h>
int main()
{
  int n,k;
  char a[101][11];
  char temp[11];
  
  scanf("%d %d\n",&n,&k); //注意'\n'的接收，它也是字符；若不接收，后面会把'\n'当作字符串来处理，导致结果错误；
  int compare;
  
  for(int i=0;i<n;i++)
    gets(a[i]);
  
  for(int i=0; i<k; i++)
    for(int j=0; j<n-i-1; j++)
    {
      compare=strcmp(a[j],a[j+1]);
      if( compare >0 )
      {
        strcpy(temp,a[j]);
        strcpy(a[j],a[j+1]);
        strcpy(a[j+1],temp);
      }
    }
  for(int i=0; i<n; i++)
    puts(a[i]);
    
  return 0;
}