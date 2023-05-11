#include<iostream>
using namespace std;

class teacher
{
    public:
    int A;
};
class student: teacher
{
    private://if public inheritated to private then not accessible
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