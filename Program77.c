#include<stdio.h>
void Display();//[Function prototype]//Good programming practice to declare a function before its use
int main()//Main function called by O.S. while execution by the primary header[where the address of the main function is stored ]
{
    Display();//Function call by the main function //function invocation
    return 0;
}
void Display()//Function Definition
{
    printf("Jay Ganesh...");
}