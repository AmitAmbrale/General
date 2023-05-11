#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    static int B;
    Demo()
    {
        A=0;
    }
    void fun()
    {
        cout<<this->A<<"\n";
        cout<<A<<"\n";
        cout<<B<<"\n";
    }
    static void gun()
    {
        //cout<<this->A<<"\n";
        //cout<<A<<"\n";
        cout<<B<<"\n";
    }
    Demo(int i)
    {
        A=i;
    }
    Demo(Demo &Ref)
    {
        A=Ref.A;
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
};

int Demo::B=20;

int main()
{
    cout<<Demo::B<<"\n";//20
    Demo::gun();//20
    Demo obj1;
    cout<<obj1.A<<"\n";//0
    obj1.fun();//0 0
    Demo obj2(10);
    obj2.fun();//10 10
    cout<<obj2.A<<"\n";//10
    Demo obj3(obj2);
    obj3.fun();//10 10
    cout<<obj3.A<<"\n";//10
  
    return 0;
}