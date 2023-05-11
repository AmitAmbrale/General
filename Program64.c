//Array as a member
#include<stdio.h>
struct Hello
{
    int i;
    int j;
    int Arr[3];
};
int main()
{
    struct Hello obj;

    obj.i=1;
    obj.j=20;
    obj.Arr[0]=30;
    obj.Arr[1]=40;
    obj.Arr[2]=50;
    obj.Arr[3]=60;



    printf("%d\n",obj.i);
    printf("%d\n",obj.j);
    printf("%d\n",obj.Arr[0]);
    printf("%d\n",obj.Arr[1]);
    printf("%d\n",obj.Arr[2]);
    printf("%d\n",obj.Arr[3]);


    return 0;
}