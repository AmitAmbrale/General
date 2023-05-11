#include<iostream>
using namespace std;

namespace Amit
{
    class Demo
    {
        public:
        int A;
        Demo()
        {
            A=10;
        }
        void fun()
        {
            cout<<"Inside fun"<<"\n";
        }
    };
}
namespace PPA
{
    class Demo
    {
        public:
        int B;

    };
}
using namespace Amit;
using namespace PPA;
int main()
{
    Amit::Demo obj;
    PPA::Demo obj1;
    obj.fun();
    cout<<obj.A<<"\n";
}