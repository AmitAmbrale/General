// Area of rectangle
#include <stdio.h>
int main()
{
    int length, breath, Area;
    printf("Enter length of the rectangle:\n");
    scanf("%d", &length);
    printf("Enter breath of the rectangle:\n");
    scanf("%d", &breath);
    Area = length * breath;
    printf("Area of the rectangle is %d", Area);
    return 0;
}