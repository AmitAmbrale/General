#include<iostream>
using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"Inside fun";
    }
};
class B
{
    public:
    void fun()
    {
        cout<<"Inside fun1";
    }
};
class C:public A,public B
{

};

int main()
{
    C Demo;
    Demo.A::fun();
 
}