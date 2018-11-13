/*基础编程题目集 编程题7-36 复数四则运算*/

#include <stdio.h>
float a1,b1,a2,b2;
char c[5]={'+','-','*','/'};
float one(float a);

int main()
{    
	scanf("%f %f %f %f",&a1,&b1,&a2,&b2);

	float a,b;
	for(int i=0;i<=3;i++){
		if(i==0){
			a=a1+a2;
			b=b1+b2;
		}else if(i==1){
			a=a1-a2;
			b=b1-b2;
		}else if(i==2){
			a=a1*a2-b1*b2;
			b=a1*b2+a2*b1;
		}else if(i==3){
			a=(a1*a2+b1*b2)/(a2*a2+b2*b2);
			b=(b1*a2-a1*b2)/(a2*a2+b2*b2);
		}

		float k,d,e,f; 
		a=one(a);
		b=one(b);
		k=one(a1);
		d=one(b1);
		e=one(a2);
		f=one(b2);

		if(b1>=0){
			printf("(%.1f+%.1fi)",k,d);
		}else if(b1<0){
			printf("(%.1f%.1fi)",k,d);
		}
		printf(" %c ",c[i]);
		if(b2>=0){
			printf("(%.1f+%.1fi) = ",e,f);
		}else if(b2<0){
			printf("(%.1f%.1fi) = ",e,f);
		}
		if(a==0&&b==0){
			printf("0.0\n");
		}else if(a!=0&&b==0){
			printf("%.1f\n",a);
		}else if(a==0&&b!=0){
			printf("%.1fi\n",b);
		}else if(a!=0&&b>0){
			printf("%.1f+%.1fi\n",a,b);
		}else if(a!=0&&b<0){
			printf("%.1f%.1fi\n",a,b);
		}
	}
	return 0;
}

float one(float a){
	if(a>=0){
		return (float)((int)(a*10+0.5))/10;
	}else if(a<0){
		return (float)((int)(a*10-0.5))/10;
	}

}
