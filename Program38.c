// Area and circumference of circle using function
#include <stdio.h>
#define pi 3.14
void Area_Circum(float, float *, float *);
float main()
{
    float Radius = 0;
    float Area = 0;
    float Circumference = 0;
    printf("Enter radius of the circle:");
    scanf("%f", &Radius);
    Area_Circum(Radius, &Area, &Circumference);
    printf("Area of the cirle is %f\n", Area);
    printf("Circumference of the cirle is %f", Circumference);
    return 0;
}
void Area_Circum(float radius, float *area, float *circum)
{
    *area = pi * radius * radius;
    *circum = 2 * pi * radius;
}