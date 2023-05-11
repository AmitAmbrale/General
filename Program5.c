//Swapping of two numbers
#include<stdio.h>
int main()
{
    int number1=0;
    int number2=0;
    int temp=0;
    printf("Enter number 1:\n");
    scanf("%d",&number1);
    printf("Enter number 2:\n");
    scanf("%d",&number2);
    printf("Before swapping number1=%d and number2=%d\n",number1,number2);
    temp=number1;
    number1=number2;
    number2=temp;
    printf("After swapping number1=%d and number2=%d\n",number1,number2);
    return 0;
}