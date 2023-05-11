#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int i,int j)
        {
            return i+j;
        }
        int Addition(int i,int j,int k)
        {
            return i+j;
        }
        int Addition(int i,float j)
        {
            return i+j;
        }
        int Addition(float i,int j)
        {
            return i+j;
        }     
};

int main()
{
    Demo obj;
    cout<<obj.Addition(10,20)<<"\n";
    cout<<obj.Addition(10,20,30)<<"\n";
    cout<<obj.Addition(10,20.5f)<<"\n";
    cout<<obj.Addition(10.0f,20)<<"\n";

}