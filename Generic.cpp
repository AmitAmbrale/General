#include<iostream>
using namespace std;

template<class T>
T Addition(T No1,T No2)
{
    T Result;
    Result=No1+No2;
    return Result;
}
int main()
{
    int iRet=0;
    iRet=Addition(10,11);
    cout<<"Addition is : "<<iRet<<"\n";
    return 0;

}