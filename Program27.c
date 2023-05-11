//Even numbers from 51 to 100
#include<stdio.h>
int main()
{
    int iCnt=0;
    for(iCnt=51;iCnt<=100;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }
    }
    return 0;
}