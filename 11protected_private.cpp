#include<iostream>
using namespace std;

class teacher
{
    protected:
    int A;
};
class student: teacher
{
    private://if protected inheritated to private then not accessible
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