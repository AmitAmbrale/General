#include<stdio.h>
int main()
{
    int Matrix[2][2];
    int Matrix1[2][2];
    int Matrix2[2][2];
    int i,j;
    printf("Enter elements of the matrix1:");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      { 
        scanf("%d",&Matrix1[i][j]);
      }
    }
    printf("Enter elements of the matrix2:");
    for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
      {
        scanf("%d",&Matrix2[i][j]);
      }
    }
    printf("Addition of two matrices is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            Matrix[i][j]=Matrix1[i][j]+Matrix2[i][j];
            printf("%d",Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}