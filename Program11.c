//Area of triangle
#include<stdio.h>
int main()
{
    int Base=0;
    int Height=0;
    int Area_of_Triangle=0;
    printf("Enter Base of Triangle:");
    scanf("%d",&Base);
    printf("Enter Height of Triangle:");
    scanf("%d",&Height);
    Area_of_Triangle=(Base*Height)/2;
    printf("Area of triangle is %d",Area_of_Triangle);
    return 0;
}