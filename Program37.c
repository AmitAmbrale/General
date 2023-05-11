// Factorial using function
#include <stdio.h>
int Factorial(int num, int Fact)
{
  int i = 0;
  for (i = 1; i <= num; i++)
  {
    Fact = Fact * i;
  }
  return Fact;
}
int main()
{
  int number = 0;
  int fact = 1;
  int factorial = 0;
  printf("Enter any number:");
  scanf("%d", &number);
  factorial = Factorial(number, fact);
  printf("Factorial of %d = %d", number, factorial);
  return 0;
}