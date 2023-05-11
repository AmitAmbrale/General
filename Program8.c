//Radius and circumference of the circle
#include<stdio.h>
#define pi 3.14
int main()
{
    int Area=0,Radius=0,Circumference=0;
    printf("Enter radius of circle:\n");
    scanf("%d",&Radius);
    Area=pi*Radius*Radius;
    printf("Area of the circle is %d\n",Area);
    Circumference=2*pi*Radius;
    printf("Circumference of the circle is %d\n",Circumference);
    return 0;
}