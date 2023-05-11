//Prime number or not
#include<stdio.h>
int main()
{
    int number=0;
    int i;
    printf("Enter any number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
        {
        break;
        }
        if(i==number)
        {
            printf("Prime numbers:",i);
        }
    }
}