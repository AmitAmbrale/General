//Display matrix on the screen
#include<stdio.h>
int main()
{
    int matrix[3][3];
    int iCnt=0;
    int jCnt=0;
    printf("Enter elements of matrix\n");
  for(iCnt=0;iCnt<3;iCnt++)
  {
    for(jCnt=0;jCnt<3;jCnt++)
    {
      scanf("%d",&matrix[iCnt][jCnt]);
    }
  }
  for(iCnt=0;iCnt<3;iCnt++)
  {
    printf("|");
    for(jCnt=0;jCnt<3;jCnt++)
    {
      printf("%d",matrix[iCnt][jCnt]);
    }
    printf("|");
    printf("\n");
  }
return 0;
}