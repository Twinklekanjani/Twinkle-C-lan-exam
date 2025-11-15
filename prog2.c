#include <stdio.h>

int main()
{
    int size, i;

    printf("Enter size :");
    scanf("%d", &size);

    int arr[size];

    printf("Enter element of array: ", size);

    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    int large = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("\n The large element is:%d", large);

    return 0;
}