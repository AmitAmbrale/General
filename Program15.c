//Volume of cylinder
#include<stdio.h>
#define pi 3.14
int main()
{
int Radius=0,Height=0;
int Volume=0;
printf("Enter the radius of the cylinder:");
scanf("%d",&Radius);
printf("Enter the height of the cylinder:");
scanf("%d",&Height);
Volume=pi*Radius*Radius*Height;
printf("Volume of the cylinder is %d",Volume);
return 0;
}