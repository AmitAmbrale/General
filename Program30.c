// Circumference of circle using void
#include <stdio.h>
#define pi 3.14
void Display()
{
    float Circumference = 0;
    float Radius = 0;
    printf("Enter the radius of the circle:");
    scanf("%f", &Radius);
    Circumference = 2 * pi * Radius;
    printf("Circumference of circle is %f", Circumference);
}
int main()
{
    Display();
}