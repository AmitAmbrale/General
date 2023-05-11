#include<iostream>
using namespace std;

class Demo
{
    public:
    int Addition(int i,int j)
    {
        cout<<"Inside Demo Add\n";
        return i+j;
    }
    virtual int Subtraction(int i,int j)
    {
        return i-j;
    }
    virtual int Multiplication(int i,int j)=0;//Function without is body is called abstract function
};
class Hello:public Demo
{
    public:
    int Subtraction(int i,int j)
    {
        cout<<"Inside Hello Sub\n";
        int Ans=0;
        Ans=i-j;
        return Ans;
    }
    int Multiplication(int i,int j)
    {
        cout<<"Inside Hello Mul\n";
        return i*j;
    }

};

int main()
{
    Demo *bp=new Hello;
    cout<<bp->Addition(10,20)<<"\n";
    cout<<bp->Subtraction(10,20)<<"\n";
    cout<<bp->Multiplication(10,20)<<"\n";
    return 0;
}