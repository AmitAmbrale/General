#include<stdio.h>
int main()
{
    int Arr[10];
    int i;
    int max,min;
    printf("Enter numbers of the array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(Arr[i]>max)
        {
            max=Arr[i];
        }
        if(Arr[i]<min)
        {
            min=Arr[i];
        }
    }
    printf("Maximum number in the array is %d\n",max);
    printf("Minimum number in the array is %d\n",min);
    return 0;
}