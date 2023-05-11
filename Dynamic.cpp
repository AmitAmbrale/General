#include<iostream>
using namespace std;

class Demo
{
    public:
    Demo()
    {
        cout<<"Inside Default constructor\n";
    }
    Demo(int i,int j)
    {
        cout<<"Inside Parametrised constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
};

int main()
{
    Demo obj1;//Static memory allocation
    Demo obj2(10,20);
    
    Demo *p;
    p=new Demo();

    Demo *q;
    q=new Demo(10,20);

    delete p;
    delete q;

    return 0;
}