#include<iostream>
using namespace std;

class Demo
{
public:
int A;
private:
int B;
protected:
int C;

    public:
    void fun()
    {
        cout<<this->A<<"\n";
        cout<<this->B<<"\n";
        cout<<this->C<<"\n";
    }
};

int main()
{
    Demo obj;
    obj.fun();
    obj.B;
    obj.C;


    return 0;
}