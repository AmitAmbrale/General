//Circumference of circle using retrun value
#include<stdio.h>
#define pi 3.14
int Circumference(int Radius)
{
    int Circumference=0;
    Circumference=2*pi*Radius;
    return Circumference;
}
int main()
{
    int radius=0;
    int circum=0;
    printf("Enter the radius of the circle:");
    scanf("%d",&radius);
    circum=Circumference(radius);
    printf("Circumference of the circle is %d",circum);
    return 0;
}