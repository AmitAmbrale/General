//Age of candidate
#include<stdio.h>
int main()
{
    int Age=0;
    printf("Enter age the candidate:");
    scanf("%d",&Age);
    if(Age>=18)
    {
     printf("Candidate is eligible for voting");
    }
    else
    {
        printf("Candidate is not eligible for voting");
    }
    return 0;
}