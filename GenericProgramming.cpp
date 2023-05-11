#include<iostream>
using namespace std;

template<class T>
class Marvellous
{
    private:
    T A,B;
    public: 
    Marvellous()
    {
        A=10;
        B=20;
    }
    Marvellous(T i,T j)
    {
        A=i;
        B=j;
    }
    T Addition()
    {
        T Result;
        Result=A+B;
        cout<<Result;
    }
};

int main()
{
    Marvellous <float> obj(10.30,20);
    obj.Addition();
    return 0;
}