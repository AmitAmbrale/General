#include<iostream>
using namespace std;
int CheckEven(int value)
{
    int Ans=0;
    Ans = value*value;
    return Ans;
}
int main()
{
    int no;
    int B;
    cout<<"Enter the number:\n";
    cin>>no;
    B=CheckEven(no);
    cout<<B;
    return 0;
}