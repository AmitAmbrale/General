//Positive or negattive
#include<stdio.h>
int main()
{
    int Number=0;
    printf("Enter number:");
    scanf("%d",&Number);
    if(Number<0)
    {
        printf("Given number is negative");
    }
    else if(Number>0)
    {
        printf("Given number is positive");
    }
    else
    {
        printf("Given numebr is zero");
    }
    return 0;
}
