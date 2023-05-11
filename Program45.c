//Elements of array are even or odd
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
     if(Arr[i]%2==0)
     {
       printf("%d is even\n",Arr[i]);
     }
     else
     {
        printf("%d is odd\n",Arr[i]);
     }
    }
}