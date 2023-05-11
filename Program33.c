//Swapping using function
#include<stdio.h>
void Swap()
{
int number1=0,number2=0;
printf("Enter number1 and number2:");
scanf("%d%d",&number1,&number2);
printf("Before swapping number1=%d and number2=%d\n",number1,number2);
int swap=0;
swap=number1;
number1=number2;
number2=swap;
printf("After swapping number1=%d and number2=%d\n",number1,number2);
}
int main()
{
    Swap();
}