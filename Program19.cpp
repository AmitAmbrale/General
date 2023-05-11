#include<iostream>
#include<stdlib.h>
using  namespace std;
class Amit
{
  public:
     Amit()
     {
        cout<<"Inside the defult constructor\n";
     }
     Amit(int A)
     {
        cout<<"inside the parametrised constructor\n";
        cout<<A;
     }
     ~Amit()
     {
        cout<<"Inside destructor\n";
     }
};
int main()
{
    Amit obj1;
    Amit obj2(10);

    Amit *p=NULL;
    p=new Amit();

    Amit *q=NULL;
    q=new Amit(10);
    
    delete p;
    delete q;
}