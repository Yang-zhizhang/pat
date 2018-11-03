/*基础编程题库集 编程题7-6 混合类型数据格式化输入*/

#include <stdio.h>
int main()
{
  int n;
  char ch;
  float f1,f2;
  
  scanf("%f %d %c %f",&f1,&n,&ch,&f2);
  
  printf("%c %d %.2f %.2f",ch,n,f1,f2);
  
  return 0;
}