//sum of elements of the array
#include<stdio.h>
int main()
{
    int matrix[3][3];
    int i=0;
    int j=0;
    int sum=0;
    printf("Enter elements of matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<=2;j++)
        {
         scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+matrix[i][j];
        }
    }
    printf("%d",sum);
    
}