//Sumof elements of the array
#include<stdio.h>
int main()
{
    int  Arr[10];
    int i=0;
    int sum=0;
    printf("Enter elements of the Array\n");
    for(i=0;i<=9;i++)
    {
      scanf("%d",&Arr[i]);
    }
    for(i=0;i<=9;i++)
    {
      sum=sum+Arr[i];
    }
    printf("Sum of elements of the array is %d\n",sum);
    return 0;
}