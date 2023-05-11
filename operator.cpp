#include<iostream>
using namespace std;

class Demo
{
    public:
    int A;
    int B;
    Demo(int i,int j)
    {
        A=i;
        B=j;
    }
};

Demo operator + (Demo op1,Demo op2)
{
    cout<<"Inside + operator\n";
    return Demo(op1.A+op2.A,op2.B+op2.B);
}
int main()
{
    Demo obj1(10,20);
    Demo obj2(30,40);
    Demo obj3(0,0);
    obj3=obj1+obj2;

    cout<<obj3.A<<"\n"<<obj3.B;
}