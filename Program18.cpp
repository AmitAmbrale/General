#include<iostream>
using namespace std;

class Amit
{
  public:
    int A,B;
    static int X,Y;
    Amit()
    {
        cout<<"//Inside default constructor\n";
        A=0;
        B=0;
    }
    Amit(int i,int j)
    {
        cout<<"//Inside Parametrised constructor\n";
        A=i;
        B=j;
    }
    void fun(int C,int D)
    {
        cout<<"Value of A : "<<this->A<<"\n";
        cout<<"Value of C : "<<C<<"\n";
    }
};
int Amit::X=10;
int Amit::Y=10;

int main()
{
    Amit obj1;
    Amit obj2(30,40);
    cout<<"Value of X : "<<Amit::X<<"\n";
    cout<<"Value of X : "<<obj1.X<<"\n";
    obj1.fun(22,43);
    obj2.fun(22,43);

    return 0;
}