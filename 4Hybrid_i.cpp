#include<iostream>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"Inside class A\n";
    }
};
class B:public A
{
    public:
    void gun()
    {
        cout<<"Inside class B\n";
    }
};
class C
{
    public:
    void mun()
    {
        cout<<"Inside class C\n";
    }
};
class D:public B,public C
{
    public:
    void tun()
    {
        cout<<"Inside class D\n";
    }
};

int main()
{
    D obj;
    obj.fun();
    obj.gun();
    obj.mun();
    obj.tun();

    return 0;
}