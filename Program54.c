//Odd elements of the array
#include<stdio.h>
int main()
{
    int matrix[3][3];
    int i=0;
    int j=0;
    printf("Enter elements of matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<=2;j++)
        {
         scanf("%d",&matrix[i][j]);
        }
    }
    printf("Odd elements are:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(matrix[i][j]%2==1)
            {
                printf("%d\n",matrix[i][j]);
            }
        }
    }
    
return 0;
}