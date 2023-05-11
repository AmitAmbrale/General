#include<iostream>
using namespace std;
inline int Square(int i)
{
    return i*i;
}
int main()
{
    int A=0;
    int Ret=0;

    cout<<"Enter any Number : ";
    cin>>A;
    Ret=Square(A);
    cout<<Ret;
    return 0;
}