// Cube by using function
#include <stdio.h>

int cube(int no1)
{
    int cube = 0;
    cube = no1 * no1 * no1;
    return cube;
}
int main()
{
    int number = 0;
    int Cube = 0;
    printf("Enter any number:");
    scanf("%d", &number);
    Cube = cube(number);
    printf("The Cube of the given numebr is %d", Cube);
    return 0;
}