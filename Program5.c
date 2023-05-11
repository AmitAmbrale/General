#include"Program4.h"

int main()
{
    int iValue1=0,iValue2=0;
    int iAns=0;

    printf("Enter any two numbers : \n");
    scanf("%d%d",&iValue1,&iValue2);

    iAns=Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iAns);

    return 0;
}