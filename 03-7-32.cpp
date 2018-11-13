/*基础编程题目集 编程题7-32 说反话-加强版*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string str;
	stack<string> s;

	while (cin>> str)
	{
		s.push(str);
	}

	while(!s.empty())
	{
		if(s.size()>1)
		{
			cout<< s.top()<<" ";
			s.pop();
		}
		else 
		{
			cout << s.top();
			s.pop();
		}
	}

	cout <<endl;

	return 0;
}