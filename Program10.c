//simple_interest
#include<stdio.h>
int main()
{
    int simple_interest=0;
    int t=10;
    int roi=40;
    int p=70;
    int amount=0;
    simple_interest=p*roi*t/100;
    printf("Simple interest is %d\n",simple_interest);
    amount=p+simple_interest;
    printf("Amount is %d",amount);
    return 0;

}