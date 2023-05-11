#include<stdio.h>
int main()
{
    int No1=10;
    int *ptr=&No1;//Allowed

    float Data=90.9f;
    float *fptr=&Data;

    char ch='A';
    char *cptr = &ch;

    printf("Valu of No1:%d\n",No1);//10
    printf("Addres  of No1:%d\n",&No1);//100
    printf("Address stored in ptr:%d\n",ptr);//100
    printf("Address of ptr:%d\n",&ptr);//200
    printf("Value of *ptr:%d\n",*ptr);//10
    printf("Size oof No1:%d\n",sizeof(No1));//4
    printf("Size of ptr:%d\n",sizeof(ptr));//4
    printf("\n");
    printf("\n");


    printf("Valu of Data:%f\n",Data);//90.9
    printf("Addres  of Data:%d\n",&Data);//300
    printf("Address stored in fptr:%d\n",fptr);//300
    printf("Address of fptr:%d\n",&fptr);//400
    printf("Value of *fptr:%f\n",*fptr);//90.9
    printf("Size oof Data:%d\n",sizeof(Data));//4
    printf("Size of fptr:%d\n",sizeof(fptr));//4
    printf("\n");
    printf("\n");



    printf("Valu of ch:%c\n",ch);//A
    printf("Addres  of ch:%d\n",&ch);//500
    printf("Address stored in cptr:%d\n",cptr);//500
    printf("Address of cptr:%d\n",&cptr);//600
    printf("Value of *cptr:%c\n",*cptr);//A
    printf("Size oof ch:%d\n",sizeof(ch));//1
    printf("Size of cptr:%d\n",sizeof(cptr));//4


    return 0;
}