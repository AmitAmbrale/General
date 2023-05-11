// Odd elements of the array
#include <stdio.h>
int main()
{
    int number[10];
    int num = 0;
    int iCnt = 0;
    printf("Enter how numbers:");
    scanf("%d", &num);
    printf("Enter numbers:");
    for (iCnt = 1; iCnt <= num; iCnt++)
    {
        scanf("%d", &number[iCnt]);
    }
    printf("Odd numbers are:\n");
    for (iCnt = 1; iCnt <= num; iCnt++)
    {
        if (iCnt % 2 == 1)
            printf("%d\n", iCnt);
    }
    return 0;
}
