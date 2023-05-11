//circumference of cirle
#include<stdio.h>
#define pi 3.14
int main()
{
    int Radius=0,Circumference=0;
    printf("Enter the radius of the circle:\n");
    scanf("%d",&Radius);
    Circumference=2*pi*Radius;
    printf("Circumference of the circle is %d",Circumference);
    return 0;
}