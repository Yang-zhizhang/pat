/*基础编程题目集 编程题7-22 龟兔赛跑*/

/*思路：首先我们需要一个变量t来记录时间变化，还需要两个变量来记录乌龟和兔子跑的
离，对于乌龟，每次t+1时增加3米的距离，对于兔子，则需要判定兔子是否在休息，所以我
们又需要一个变量来判定兔子是否在休息。而兔子如果不休息每隔10分钟需要查看自己和乌
龟谁跑的远，那么兔子从什么时候开始休息，又从什么时候休息结束呢？我们还需要一个变
量来处理这种情况，这个变量就是用来记录兔子流逝时间，一开始外界时间和兔子时间流逝
同步，当兔子休息时，这个变量增加30，等外界时间增加到这个值时，再唤醒兔子，接下来
兔子时间和外界时间流逝又同步，直到下一次兔子需要休息，重复上述过程。*/

#include<iostream>
using namespace std;

int main()
{
	int t=0,trab=0,dtur=0,drab=0,T;
	/*定义外界世界他，兔子时间trab，输入时间T,乌龟距离dtur，兔子距离drab*/
	bool rest=false; /*定义休息标识rest，初始化为false*/
	cin>>T;

	while( t != T)
	{
		dtur +=3;  //乌龟移动；
		if( !rest ) //兔子不在休息状态
		{
			trab ++;  //兔子时间流逝；
			drab  += 9;  //兔子移动；
		}
		t++; //外界时间流逝；

		if( trab%10 ==0 && rest == false)
		{//如果兔子时间是10的整倍数且兔子不在休息状态，则回头查看和乌龟的距离；
			if (drab > dtur) //如果兔子在乌龟前面；
			{
				rest =true;
				trab += 30; //兔子休息，兔子时间先增加30，等外界时间追上；
			}

		}
		if (t == trab) //如果外界时间增加到和兔子时间一样时,唤醒兔子；
			rest = false;
	}

	if (drab >dtur)
		cout<<"^_^"<<' '<<drab;
	else if (drab <dtur)
		cout<<"@_@"<<' '<<dtur;
	else
		cout<<"-_-"<<' '<<dtur;

	return 0;
}