#include <iostream>
using namespace std;

class Demo
{
public:
    int i,j;
    static int k;

    Demo()
    {
        i=10;
        
    }
};
int main()
{
    int no=11;
    float f=3.14;
    Demo obj;

    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);

    
    return 0;
}