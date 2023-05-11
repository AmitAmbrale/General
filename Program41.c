//Sum of odd numbers 1 to n 
#include<stdio.h>
int main()
{
    int num=0;
    int sum=0;
    int i=0;

    printf("Enter any number:");
    scanf("%d",&num);
     for(i=0;i<=num;i++)
     {  
        if(i%2==1)
        { 
            sum=sum+i;
        }
     }
     printf("Sum of odd numbers is %d",sum);
     return 0;
}