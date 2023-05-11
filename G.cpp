#include<iostream>
using namespace std;

template<class T,T>
T Addition(T No1,T No2)
{
	T iRet;
	iRet=No1+No2;
	return iRet;
}
int main()
{
	int iRet;
	iRet=Addition(10,20.5);
	cout<<iRet<<"\n";

	return 0;
}