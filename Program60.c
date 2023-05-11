//Number divisible by 3 but not by 4
#include<stdio.h>
int main()
{
int number;
int i;
printf("Enter any number:");
scanf("%d",&number);
for(i=0;i<=number;i++)
{
if(i%3==0)
{
if(i%4!=0)
{
printf("%d\n",i);
}
}
}
return 0;
}