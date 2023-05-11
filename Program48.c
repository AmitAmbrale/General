//Roll number of students
#include<stdio.h>
int main()
{
    int Roll_No[5];
    int i;
    printf("Enter roll  number of students:");
    for(i=0;i<=4;i++)
    {
    scanf("%d",&Roll_No[i]);
    }
    for(i=0;i<=4;i++)
    {
      printf("Roll number of %dst student is %d\n",i+1,Roll_No[i]);
    }
    return 0;
}