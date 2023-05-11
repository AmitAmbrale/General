#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
     void Fun()
    {
        cout<<"Inside Fun Base"<<"\n";
    }
    void Gun()
    {
        cout<<"Inside Gun Base"<<"\n";
    }
    void Sun()
    {
        cout<<"Inside Sun Base"<<"\n";
    }
};

class Derived:public Base
{
    public:
    int X,Y;
    void Fun()
    {
        cout<<"Inside Fun Derived"<<"\n";
    }
    void Gun()
    {
        cout<<"Inside Gun Derived"<<"\n";
    }
    void Sun()
    {
        cout<<"Inside Sun Derived"<<"\n";
    }
};

int main()
{
    Derived *bp=new Derived;
    bp->Fun();
    bp->Gun();
    bp->Sun();


    return 0;
}