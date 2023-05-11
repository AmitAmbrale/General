//Structure all in one
#include<stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct Demo obj1;
    obj1.i=10;
    obj1.f=10.5;
    obj1.j=20;
    printf("%d\n",obj1.i);//10
    printf("%f\n",obj1.f);//10.5
    printf("%d\n",obj1.j);//20

    struct Demo obj2;
    struct Demo *ptr=&obj2;
    ptr->i=22;
    ptr->j=100;
    ptr->f=30.7;

    printf("%d\n",ptr->i);//22
    printf("%f\n",ptr->f);//100
    printf("%d\n",ptr->j);//30.7
    printf("%d\n",obj2.i);//22
    printf("%f\n",obj2.f);//100
    printf("%d\n",obj2.j);//30.7



    struct Demo obj3[2];
    
    obj3[0].i=1;
    obj3[0].j=2;
    obj3[0].f=3.0;

    obj3[1].i=4;
    obj3[1].f=6.0;
    obj3[1].j=5;
    

    printf("%d\n",obj3[0].i);
    printf("%d\n",obj3[0].j);
    printf("%f\n",obj3[0].f);

    printf("%d\n",obj3[1].i);
    printf("%f\n",obj3[1].f);
    printf("%d\n",obj3[1].j);



}