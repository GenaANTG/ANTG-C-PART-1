#include <stdio.h>

#define SIZE 100

int main(void)
{
    int a[SIZE] = { 0 };

    for (int i = 0; i < SIZE; i++)
    {
        printf("a[%i]: %i\n", i, a[i]);
    }

    return 0;
}