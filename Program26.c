//Sum of first n numbers
#include<stdio.h>
int main()
{
 int n,iCnt=0;
 int sum=1;
 printf("Enter any number:");
 scanf("%d",&n);
 for(iCnt=1;iCnt<n;iCnt++)
 {
    sum=sum+iCnt;
 }
 printf("Sum of first n numbers is %d",sum);
 return 0;


}