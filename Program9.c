#include<stdio.h>

void Percentage(int Marks)
{
    if((Marks < 0) || (Marks > 100))
    {
        printf("Please enter percentage between 0-100\n");
        return ;
    }
    if((Marks >= 0) && (Marks < 35))
    {
        printf("You are fail");
    }
    else if((Marks >=35) && (Marks < 45))
    {
        printf("You are pass");
    }
    else if((Marks >=45) && (Marks < 60))
    {
        printf("You got second class");
    }
    else if((Marks >= 60) && (Marks < 75))
    {
        printf("You got first class");
    }
    else if((Marks >= 75) && (Marks <= 100))
    {
        printf("You got first class with distinction");
    }

}
int main()
{
    int Marks=0;

    printf("Enter Percentage : \n");
    scanf("%d",&Marks);

    Percentage(Marks);

    return 0;
}