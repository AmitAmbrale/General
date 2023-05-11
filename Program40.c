//Even or odd using void
#include<stdio.h>
void Even();
int main()
{
    Even();
}
void Even()
{
    int i=0;
    int number=0;
    printf("Enter any number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}