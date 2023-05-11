#include<stdio.h>
#include<stdbool.h>

bool EvenOdd(int iNo)
{
    if((iNo%2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1=0;
    bool bRet=true;

    printf("Enter any number : \n");
    scanf("%d",&iValue1);

    bRet=EvenOdd(iValue1);

    if(bRet == true)
    {
        printf("%d is Even",iValue1);
    }
    else 
    {
        printf("%d is Odd",iValue1);
    }

    return 0;
}