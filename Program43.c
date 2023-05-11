//Sum oof 1+(1+2)+(1+2+3)+(1+2+3+4).....n
#include<stdio.h>
int main()
{
    int number=0;
    int sum=0;
    int i=0;
    int j=0;
    printf("Enter any number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
      for(j=1;j<=i;j++)
      {
        sum=sum+j;
      }
    }
    printf("Sum of n terms = %d",sum);
    return 0;
}