#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    int b;
    void operator()(A &demo1)
    {
      cout<<"Inside not equal"<<this->a;
    }
};

int main()
{
    A demo;
    A demo1;
    demo.a=10;
    return 0;
}