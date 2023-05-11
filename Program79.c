#include<stdio.h>
struct  DATE
{
    int day;
    int month;
    int year;
};

int main()
{
    struct DATE obj;
    printf("Enter the day:");
    scanf("%d",&(obj.day));
    if(obj.day<=31)
    {
        printf("Enter the month:");
        scanf("%d",&(obj.month));
        if(obj.month<=12)
        {
            printf("Enter the  year:");
            scanf("%d",&(obj.year));
            if(obj.year>=1000 && obj.year<=9999)
            {
            printf("%d/%d/%d",obj.day,obj.month,obj.year);
            }
            else
            {
            printf("Invalid year");
            }
        }
        else
        {
            printf("Invlid month");
        }
    }
    else
    {
        printf("Invalid day");
    }
    return 0;
}