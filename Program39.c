//by using *
#include<stdio.h>
int Sum(int,int*); //Function declaration
int main()
{
    int sum=0;
    int number=0;
    printf("Enter any number:");
    scanf("%d",&number);
    Sum(number,&sum);//Function Call
    printf("Sum of %d = %d",number,sum);
    return 0;
}
int Sum(int num,int* Sum) //Function Definition
{
    int i=0;
    for(i=0;i<=num;i++)
    {
        *Sum=*Sum+i;
    }
}