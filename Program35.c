//Roll number of students
#include<stdio.h>
int main()
{
    int Arr[5];
    int iCnt=0;
    printf("Enter roll number of five students:");
    for(iCnt=0;iCnt<=4;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    for(iCnt=0;iCnt<=4;iCnt++)
    {
        printf("Roll no of %dst student is %d\n",iCnt+1,Arr[iCnt]);
    }

    return 0;
}