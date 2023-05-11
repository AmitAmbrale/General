//Sum of 1^2+2^2+3^3....n
#include<stdio.h>
int main()
{
    int num=0;
    int sum=0;
    printf("Enter any number:");
    scanf("%d",&num);
    int iCnt=0;
    for(iCnt=1;iCnt<=num;iCnt++)
    {
        sum=iCnt*iCnt+sum;
    }
    printf("The of n terms is %d",sum);
    return 0;
}