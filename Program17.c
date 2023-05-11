//Maximum between two numbwrs
#include<stdio.h>
int main()
{
    int no1=0;
    int no2=0;
    printf("Enter number1:");
    scanf("%d",&no1);
    printf("Enter numer2:");
    scanf("%d",&no2);
    if(no1>no2)
    {
        printf("Maximum Number is %d",no1);
    }
    else if(no2>no1)
    {
        printf("Maximum Number is %d",no2);
    }
    else{
        printf("Both numbers are same");
    }
    return 0;
}
