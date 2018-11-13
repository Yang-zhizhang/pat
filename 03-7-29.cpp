/*基础编程题目集 编程题7-29 删除字符串中的子串*/

#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[81];
    char s2[81];
    char t[81];/*定义临时数组,因为strcpy, strcat 中的传入参数的内存地址不能重叠*/
    char *p;/*定义指针p，来接收匹配成功返回的地址*/
    gets(s1);
    gets(s2);
    while((p=strstr(s1,s2))!=NULL)/*找到s2在s1中第一次出现的首个字符位置，如果合法*/
    {
    	strcpy(t,p+strlen(s2));/*先将p所指位置偏移s2长度之后的所有字符拷贝到临时数组中*/
    	*p='\0';/*将p的内容置为结束符*/
    	strcat(s1,t);/*将t的内容接到s1末尾，这里是接在结束符之后，同时也会覆盖原结束符之后的字符，这样便完成了一次删除*/
    }
    puts(s1);
    return 0; 
}