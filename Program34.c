//Factorial 
#include<stdio.h>
int main()
{
    int fact=1;
    int iCnt=0;
    int n=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(iCnt=1;iCnt<=n;iCnt++)
    {
        fact=fact*iCnt;
    }
    printf("Factorial of given number is %d",fact);
    return 0;
}