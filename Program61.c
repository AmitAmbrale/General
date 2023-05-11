//Sum of number divisible by 7
#include<stdio.h>
int main()
{
    int number;
    int sum=0;
    printf("Enter any number:");
    scanf("%d",&number);
    int i=0;
    for(i=1;i<=number;i++)
    {
        if(i%7==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of numbers divisible by 7=%d\n",sum);
    return 0;
}