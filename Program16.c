//static storage class
#include<stdio.h>
void Display()
{
    static int a=0;
    a++;
    printf("%d\n",a);
}
int main()
{
  int iCnt=0;
  for(iCnt=1;iCnt<=10;iCnt++)
  {
    Display();
  }
}