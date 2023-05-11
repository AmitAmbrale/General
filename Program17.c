#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    if(iNo < 0) // Updater
    {
        iNo=-iNo;
    }

    if(iNo == 0)
    {
        printf("Please enter non-zero number\n");
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}