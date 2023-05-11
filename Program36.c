#include <stdio.h>
int Swap(int *x, int *y, int Swap)
{
  Swap = *x;
  *x = *y;
  *y = Swap;
}
int main()
{
  int num1 = 0;
  int num2 = 0;
  int swap = 0;
  printf("Enter number 1:");
  scanf("%d", &num1);
  printf("Enter number 2:");
  scanf("%d", &num2);
  printf("Before swapping of numbers num1=%d and num2=%d\n", num1, num2);
  swap = Swap(&num1, &num2, swap);
  printf("After swapping of numbers num1=%d and num2=%d\n", num1, num2);
}