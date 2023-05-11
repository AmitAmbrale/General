#include<iostream>
using namespace std;

class teacher
{
    public:
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
    return 0;
}