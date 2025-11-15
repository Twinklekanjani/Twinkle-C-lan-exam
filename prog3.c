#include <stdio.h>

void data(char name[20])
{
    printf("\nYour name is: %s", name);
}
int strlen(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int main()
{
}