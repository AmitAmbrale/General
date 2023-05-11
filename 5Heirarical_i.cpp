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
class C:public A
{
    public:
    void mun()
    {
        cout<<"Inside class C\n";
    }
};
class D:public B
{
    public:
    void bun()
    {
        cout<<"Inside class D\n";
    }
};
class E:public B
{
    public:
    void sun()
    {
        cout<<"Inside class E\n";
    }
};
class F:public C
{
    public:
    void nun()
    {
        cout<<"Inside class F\n";
    }
};
class G:public C
{
    public:
    void dun()
    {
        cout<<"Inside class G\n";
    }
};

int main()
{
    A obj1;
    obj1.fun();
    B obj2;
    obj2.fun();
    obj2.gun();
    C obj3;
    obj3.fun();
    obj3.mun();
    D obj4;
    obj4.fun();
    obj4.gun();
    obj4.bun();
    E obj5;
    obj5.fun();
    obj5.gun();
    obj5.sun();
    F obj6;
    obj6.fun();
    obj6.mun();
    obj6.nun();
    G onj7;
    onj7.fun();
    onj7.mun();
    onj7.dun();
    return 0;
}