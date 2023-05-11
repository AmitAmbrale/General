#include<stdio.h>

int main()
{
    int Arr[3][3];

    Arr[0][0]=10;
    Arr[0][1]=20;
    Arr[0][2]=30;
    Arr[1][0]=40;
    Arr[1][1]=50;
    Arr[1][2]=60;
    Arr[2][0]=70;
    Arr[2][1]=80;
    Arr[2][2]=90;

    printf("%d\n",Arr[0][0]);
    printf("%d\n",Arr[0][1]);
    printf("%d\n",Arr[0][2]);
    printf("%d\n",Arr[1][0]);
    printf("%d\n",Arr[1][1]);
    printf("%d\n",Arr[1][2]);
    printf("%d\n",Arr[2][0]);
    printf("%d\n",Arr[2][1]);
    printf("%d\n",Arr[2][2]);
    
    return 0;
}