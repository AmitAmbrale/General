#include<iostream>
using namespace std;

class Demo
{
    private:
        int A;
        int B;


        public:
        Demo()
        {
            cout<<"Inside default constructor\n";
            A=10;
            B=20;
        }

        Demo(int i,int j)
        {
            cout<<"Inside parameterised constructor\n";
            A=i;
            B=j;
        }

        Demo(Demo &No)
        {
            cout<<"Inside copy constructor\n";
            A=No.A;
            B=No.B;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = A + B;
            return Ans;      
        }

        int Subtraction()
        {
            int Ans = 0;
            Ans = A - B;
            return Ans;      
        }

        ~Demo()
        {
            cout<<"Inside destructor\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(40,50);
    Demo obj3(obj2);

    int Ret = 0;
    Ret = obj1.Addition();//30
    cout<<Ret<<"\n";
    Ret = obj1.Subtraction();//-10
    cout<<Ret<<"\n";

    Ret = obj2.Addition();//90
    cout<<Ret<<"\n";
    Ret = obj2.Subtraction();//-10
    cout<<Ret<<"\n";

    Ret = obj3.Addition();//90
    cout<<Ret<<"\n";
    Ret = obj3.Subtraction();//-10
    cout<<Ret<<"\n";

    return 0;
}