/*基础编程题库集 基础函数题6-13 折半查找*/

#include<stdio.h>
using namespace std;

#define MAXSIZE 50
typedef int KeyType;

typedef struct 
{
	KeyType key;
}ElemType;

typedef struct 
{
	ElemType *R;
	int length;
}SSTable;
void Create(SSTable &T)
{
	int i;
	T.R=new ElemType[MAXSIZE-1];
	cin>>T.length;

	for(i=1;i<=T.length;i++)  //注意下标从1开始；
		cin>>T.R[i].key;
}

int  Search_Bin(SSTable T,KeyType k);

int main()
{
	SSTable T;
	KeyType k;
	Create(T);
	cin>>k;
	int pos=Search_Bin(T,k);

	if(pos==0)
		cout<<"NOT FOUND"<<<endl;
	else 
		cout<<pos<<endl;

	return 0;
}

int Search_Bin(SSTable T,KeyType k)
{
	int low,mid,high;

	low=1;
	high=T.length;

	while(low<high)
	{
		mid=(low+high)/2;
		if (T.R[mid].key<k)
			low=mid+1;
		else
			if(T.R[mid].key>k)
				high=mid-1;
		else
			return mid;

	}
	return 0;
}