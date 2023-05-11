//Number not divisible by 7
#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    int i=0;
    for(i=1;i<=number;i++)
    {
        if(i%7!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}