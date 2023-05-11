#include<stdio.h>
#include<stdbool.h>

bool Divisible(int iNo)
{
    if(((iNo%3) == 0) && ((iNo%5) == 0))
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
    int iValue=0;
    bool bRet=0;

    printf("Enter any number : ");
    scanf("%d",&iValue);

    bRet=Divisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 5 And 3\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5 And 3\n",iValue);
    }

    return 0;
}