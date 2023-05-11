#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        const int B;
    Demo():B(20)
    {
        A=10;
    }

    Demo(int i,int j):B(j)
    {
        A=i;
    }
    void fun()
    {
        A++;
        //B++;Cannot update a constant variable 
    }

    void gun() const
    {
        //A++;  Cannot Access the normal variables in a contant method 
        B;
    }
};

int main()
{
    Demo obj;
    const Demo obj1;

    obj.fun();
    obj.gun();

    obj1.gun();
    // obj1.fun();  constant object cannot access non-constant method
}