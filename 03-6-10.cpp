/*基础编程题目集 函数题6-10 阶乘计算升级版*/

#include <stdio.h>
void Print_Factorial ( const int N );

int main()
{
    int N;
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial(int N){
	int a[3000];
	int temp,num,digit;//temp：每一位的结果  num:进位   digit：结果的位数
	int i,j;
	a[0]=1;
	digit=1;                 //从第1位开始 
	if(N>=0) {
		for(i=2;i<=N;i++){
	    	num=0;
			for(j=0;j<digit;j++){
			  temp=a[j]*i+num;    
			  a[j]=temp%10;       //把当前位的数字存入数字 
			  num=temp/10;        //向前面一位进位 
		    } 
		    while(num){           //当i的阶乘算完，任有进位，则数组需扩大 
		    	a[digit]=num%10;
		    	num/=10;
		    	digit++;
			}
		}
		for(i=digit-1;i>=0;i--){
			printf("%d",a[i]);
		}
	}
	else printf("Invalid input");
} 
