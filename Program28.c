//Area of triangle using function
#include<stdio.h>
int Area(int Base,int Height)
{
    int Area=0;
    Area=(Base*Height)/2;
    return Area;
}
int main()
{
    int base=0;
    int height=0;
    int area=0;
    printf("Enter base of the triangle:");
    scanf("%d",&base);
    printf("Enter height of the triangle:");
    scanf("%d",&height);
    area=Area(base,height);
    printf("The area of the triangle is %d",area);
    return 0;
}