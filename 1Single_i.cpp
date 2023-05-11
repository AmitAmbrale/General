#include <iostream>
using namespace std;

class Demo1
{
public:
    int A;
    int B;
    void fun()
    {
        cout << "class A\n";
    }
};
class Demo2 : public Demo1
{
public:
    void gun()
    {
        cout << "class B\n";
    }
};

int main()
{
    Demo2 demo;
    Demo1 de;
    // de.gun();   the fumction in derived class(child class)cannot be acccessed by the parent/base class
    demo.fun();
    demo.gun();
    demo.A = 10;
    cout << demo.A;
    return 0;
}