#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;

    if(iNo == 0)
    {
        printf("You have entered zero\n");
        return ;
    }
    printf("Table for %d is : \n",iNo);

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d * %d = %d\n",iNo,iCnt,(iNo*iCnt));
    }
}
int main()
{
    int iValue=0;

    printf("Enter any number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}