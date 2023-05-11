#include<iostream>
using namespace std;

template <class T>
T Addition(T i,T j)
{
    T Result;
    Result=i+j;
    return Result;
}
int main()
{
    int i;
    float f;
    double d;

    i=Addition(10,11);
    cout<<i<<"\n";

    f=Addition(10.1f,11.5f);
    cout<<f<<"\n";

    d=Addition(10.5,11.7);
    cout<<d<<"\n";

    return 0;
}