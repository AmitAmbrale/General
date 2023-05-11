#include<stdio.h>

void Maximum(int iNo1,int iNo2)
{
    printf("Before Swapping first number = %d  and  second number = %d\n",iNo1,iNo2);
    iNo2=iNo2-iNo1;
    iNo1=iNo2+iNo1;
    iNo2=iNo1-iNo2;
    printf("After Swapping first number = %d  and  second number = %d\n",iNo1,iNo2);

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    Maximum(iValue1,iValue2);

    return 0;
}
