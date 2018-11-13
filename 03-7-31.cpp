/*基础编程题目集 编程题7-31 字符串循环左移*/

#include<stdio.h>
#include<string>
using nameapace std;

int main()
{
	string s,t;
	int N,R;
	getline额(cin,s);
	cin>>N;
	if(N>0 && N<s.length())
	{
		t.append(s,0,N);
		s.erase(0,N);
		s.append(t);
	}
	else if(N > s.length())
	{
		R= N%s.length();
		t.append(s,0,R);
		s.erase(0,R);
		s.append(t);
	}

	cout<< s;
	return 0;
}