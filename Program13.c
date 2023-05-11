//Area of circle
#include<stdio.h>
#define pi 3.14
int main()
{   
    int Area=0,Radius=0;
    printf("Enter radius of circle:\n");
    scanf("%d",&Radius);
    Area=pi*Radius*Radius;
    printf("Area of the circle is %d\n",Area);
    return 0;
}