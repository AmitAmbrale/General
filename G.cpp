#include<iostream>
using namespace std;

template<class T>
class Demo
{
    public:
        T A,B;
    Demo()
    {
        A=10;
        B=20;
    }
    Demo(T C,T D)
    {
        A=C;
        B=D;
    }
    T Addition()
    {
        T Result;
        Result=A+B;
        return Result;
    }


};
int main()
{
    Demo <int>obj;
    Demo <float>obj1(10.5f,20.3f);

    int iRet;
    iRet=obj.Addition();
    cout<<iRet<<"\n";

    float fRet;
    fRet=obj1.Addition();
    cout<<fRet<<"\n";
    
    return 0;
}