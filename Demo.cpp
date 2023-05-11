#include<iostream>
using namespace std;

class Amit
{
    public:
    static int  A;
    int B;
    Amit(int no1)
    {
        B=no1;
        cout<<B;
    }
};
int Amit::A=10;
int main()
{
    cout<<Amit::A<<"\n";
    Amit Demo(30);
    
    return 0;
}