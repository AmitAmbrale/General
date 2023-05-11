#include<iostream>
using namespace std;

template<class T>
T Addition(T i,T j)
{
    T Result;
    Result=i+j;
    return Result;
}

int main()
{
    int iRet;
    iRet=Addition(10,20);
    float fRet;
    fRet=Addition(20.3,31.3);
    cout<<"Addition for integer values is : "<<iRet<<"\n";
    cout<<"Addition for floating numbers is : "<<fRet;
    return 0;
}