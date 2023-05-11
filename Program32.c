// Maximum number using function
#include <stdio.h>
void Display()
{
    int a = 0;
    int b = 0;
    printf("Enter any two numbers:");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("Maximium number is %d", a);
    }
    else if (b > a)
    {
        printf("Maximum number is %d", b);
    }
    else
    {
        printf("Given numbers are equal");
    }
}
int main()
{
    Display();
}