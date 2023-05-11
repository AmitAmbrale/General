#include<iostream>
using namespace std;

int main()
{
    int No=100;
    int &No1=No;
    cout<<"Value of No : "<<No<<"\n";//100
    cout<<"Size of No : "<<sizeof(No)<<"\n";//4
    cout<<"Address of No : "<<&No<<"\n";//1000

    cout<<"Value of No1 : "<<No1<<"\n";//100
    cout<<"Size of No1 : "<<sizeof(No1)<<"\n";//4
    cout<<"Address of No1 : "<<&No1<<"\n";//1000

    int *p=&No;
    int *(&q)=p;

    cout<<"Value stored in p : "<<p<<"\n";//1000
    cout<<"Value stored in q : "<<q<<"\n";//1000

    cout<<"Value of *p : "<<*p<<"\n";//100
    cout<<"Value of *q : "<<*q<<"\n";//100

    cout<<"Size of p : "<<sizeof(p)<<"\n";//4
    cout<<"Size of q : "<<sizeof(q)<<"\n";//4

    cout<<"Address of p : "<<&p<<"\n";//2000
    cout<<"Address of q : "<<&q<<"\n";//2000

    
}