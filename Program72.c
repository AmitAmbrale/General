#include<stdio.h>
int main()
{
    float value=3.14;
    float *p=&value;
    float *q=p;
    float ans=*p+*q;
    printf("%f",ans);
    return 0;
}