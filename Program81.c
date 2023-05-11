#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iNew_Size = 0;

    printf("Enter size of the array : \n");
    scanf("%d", &iSize);

    ptr = (float *)malloc(iSize * sizeof(int));

    printf("Enter %d elements : \n", iSize);
    for (int i = 0; i < iSize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("elements of array are : \n", iSize);

    for (int i = 0; i < iSize; i++)
    {
        printf("%d\n", ptr[i]);
    }



    printf("Extended size of the array : \n");
    scanf("%d", &iNew_Size);

    ptr = (int *)realloc(ptr, sizeof(int) * iNew_Size);

    printf("Enter more elements in the array : \n");

    for (int i = iSize; i < iNew_Size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements added are : \n");

     for (int i = iSize; i < iNew_Size; i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("Elements in the array are : \n");

    for (int i = 0; i < iNew_Size; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}