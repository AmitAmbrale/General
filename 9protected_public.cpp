#include<iostream>
using namespace std;

class teacher
{
    protected:
    int A;
};
class student: teacher
{
    public://Accessible
    void Demo()
    {
     cout<<this->A;
    }
};

int main()
{
    student s1;
    s1.Demo();
    cout<<s1.A;
    return 0;
}