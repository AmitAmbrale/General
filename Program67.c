#include<stdio.h>
struct Class
{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
};
int main()
{
    struct Class student[5];
    int i=0;
    int Average[5];
    printf("Marks scored in subject1:");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&student[i].sub1);
      if(i==4)
      {
        break;
      }
    }
    printf("Marks scored in subject2:");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&student[i].sub2);
      if(i==4)
      {
        break;
      }
    }
    printf("Marks scored in subject3:");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&student[i].sub3);
      if(i==4)
      {
        break;
      }
    }
    printf("Marks scored in subject4:");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&student[i].sub4);
      if(i==4)
      {
        break;
      }
    }
    printf("Marks scored in subject5:");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&student[i].sub5);
      if(i==4)
      {
        break;
      }
    }

    for(i=0;i<=4;i++)
    {
        Average[i]=(student[i].sub1+student[i].sub2+student[i].sub3+student[i].sub4+student[i].sub5)/5;
        printf("Average marks scored student%d=%d out of 100 \n",i+1,Average[i]);
    }

    
}