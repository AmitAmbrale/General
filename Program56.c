//Display 3*3 matrix [take elements from user]
#include<stdio.h>
int main()
{
    int Arr[100][100];
    int i,j;
    int rows;
    int cols;
    printf("Enter how many rows:");
    scanf("%d",&rows);
    printf("Enter how many columns:");
    scanf("%d",&cols);
    printf("Enter elements of the Matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}