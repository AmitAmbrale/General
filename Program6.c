#include<stdio.h>
int main()
{
    int number1=0;
    int number2=0;
    printf("Enter number1:");
    scanf("%d",&number1);
    printf("Enter number2:");
    scanf("%d",&number2);
    number2=number2-number1;
    number1=number1+number2;
    number2=number1-number2;
    printf("number1=%d and number2=%d",number1,number2);
}