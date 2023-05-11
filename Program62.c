//Positive elements in the matrix
#include<stdio.h>
int main()
{
    int Arr[100];
    int i,number;
    printf("Enter how many numbers in a array:");
    scanf("%d",&number);
    printf("Enter elements of the Array:");
    for(i=0;i<=number;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<=number;i++)
    {
        if(Arr[i]>0)
        {
            printf("Positive no:%d\n",Arr[i]);
        }
        else
        {
            printf("Negative no:%d\n",Arr[i]);
        }
    }
    return 0;
}