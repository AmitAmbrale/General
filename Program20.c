#include<stdio.h>

int Length(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    int Arr[10];
    int iRet=0;

    printf("Enter you name : \n");
    scanf("%s",Arr);

    iRet=Length(Arr);

    printf("Length of string is : %d",iRet);

    return 0;
}