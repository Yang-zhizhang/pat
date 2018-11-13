/*基础编程题目集 编程题7-37 整数分解若干项之和*/
//深度优先搜索变形

#include<iostream>

using namespace std;

int sum=0,pos=-1,countN=0,N;//定义试探和，试探数组指针，试探成功次数计数器，待匹配数 

int Result[31];//定义试探数组，存放试探数字 

void DFS(int x)//深度优先搜索，层层递归，逐一试探 

{

	if(sum==N)//如果试探和等于待匹配数 

	{

		countN++;//成功次数+1 

		cout<<N<<'=';

		for(int i=0;i<pos;i++)//输出试探数 

		cout<<Result[i]<<'+';

		if(countN%4==0||Result[pos]==N)//判定最后一个试探数的情况 

		//如果成功次数为4的倍数或者试探数等于待匹配数 

		cout<<Result[pos]<<'\n';//输出试探数并换行 

		else

		cout<<Result[pos]<<';';//否则按格式输出 

		return;

	}

	else if(sum>N)//如果试探和大于待匹配数，则返回到上一层 

	return;

	for(int i=x;i<=N;i++)//范围从输入参数，即上一层传进来的试探数开始到待匹配数 

	{

		Result[++pos]=i;//指针指向下一位置并保存当前变量为试探数 

		sum+=i;//试探和累加试探数 

		DFS(i);//递归试探 

		sum-=i;//试探完毕后减去试探数，以待下一循环加上新的试探数来试探 

		pos--;//指针回复到原来的位置，以待下一次自增并保存新的试探数 

	}//注意，sum,pos作为全局变量，在连续递归调用的情况下会一直自增，故无需担心自增后马上被减去

}

int main()

{

	cin>>N;

	DFS(1);

	return 0;

}
