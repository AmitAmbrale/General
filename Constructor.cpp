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
        void Fun()//Fun(Demo *this)
        {
            cout<<"Value of A : "<<A<<"\n";
            cout<<"Value of B : "<<B<<"\n";
            cout<<"Value of A : "<<this->A<<"\n";
            cout<<"Value of B : "<<this->B<<"\n";          
        }

        ~Demo()
        {
            cout<<"Inside destructor\n";
        }
};

int main()
{
    Demo obj1={60,70};
    Demo obj2(40,50);
    Demo obj3;

    obj1.Fun();//Fun(&obj1)
    obj2.Fun();//Fun(&obj2)
    obj3.Fun();//Fun(&obj3)

    // obj1.A;

    return 0;
}