//Marks and average of students
#include<stdio.h>
int main()
{
    int Arr[10];
    int Stud;
    int sum=0;
    float Average=0;
    int i;
    printf("Enter how many students:");
    scanf("%d",&Stud);
    printf("Enter marks of the students:");
    for(i=0;i<Stud;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<Stud;i++)
    {
        sum=sum+Arr[i];
    }
    Average=(float)sum/Stud;
    printf("Average of marks of the students is %f",Average);
}