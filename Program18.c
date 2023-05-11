//Even odd
#include<stdio.h>
void Display()
{
    int number1=0;
    printf("Enetr number1 :");
    scanf("%d",&number1);
    if(number1 % 2 == 0)
    {
     printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    }
}
int main()
{
    Display();
}