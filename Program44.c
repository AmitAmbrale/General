//Display Elements of the array
#include<stdio.h>
int main()
{
    int  Arr[10];
    int i=0;
    printf("Enter elements of the Array\n");
    for(i=0;i<=9;i++)
    {
      scanf("%d",&Arr[i]);
    }
    for(i=0;i<=9;i++)
    {
     printf("%dst element of Array=%d",i+1,Arr[i]);
    }
}