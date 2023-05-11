#include<stdio.h>
int main()
{
    int no=10;
    int const * const p=&no;
    printf("%d",*p);
    return 0;
}