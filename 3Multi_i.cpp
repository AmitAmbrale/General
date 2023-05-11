#include<iostream>
using namespace std;

class A
{
    public:
       int A;
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
class C:public B{
    public:
    void mun()
    {
        cout<<"inside class C\n";
    }
};

int main()
{
    C demo;
    demo.fun();
    demo.gun();
    demo.mun();
    demo.A=10;
    cout<<demo.A;
    return 0;
} // namespace name
