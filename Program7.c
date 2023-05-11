//Size of datatypes
#include<stdio.h>
int main()
{
    char ch;
    int integer;
    float floating;
    double number;
    printf("Character stores %d bytes\n",sizeof(ch));
    printf("Integer stores %d bytes\n",sizeof(int));
    printf("Float stores %d bytes\n",sizeof(float));
    printf("Double stores %d bytes\n",sizeof(double));
    return 0;
}