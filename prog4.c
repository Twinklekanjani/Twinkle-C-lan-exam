#include <stdio.h>

int main()
{
    int size,i;

    printf("Enter array size: ");
    scanf("%d",&size);
    
    int a[size];
    int *p[size];

    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

        p[i] = &a[i];
    }

    for (i = 0; i < size; i++)
    {
        *p[i] = (*p[i]) * (*p[i]);
    }

    printf("Sqaure of an element is: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", *p[i]);
    }

    return 0;
} 