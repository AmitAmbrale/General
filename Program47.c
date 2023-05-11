//Prime number 
#include<stdio.h>
int main()
{
    int number=0;
    int i=0;
    printf("Enter any number\n");
    scanf("%d",&number);
    for(i=2;i<=number;i++)
    {
    if(number%i==0)
        break;
    if(i==number)
        printf("%d is Prime\n",i);
    else
        printf("%d is Not-prime\n",i);
    }
    return 0;
}