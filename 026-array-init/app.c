#include <stdio.h>

#define SIZE 4

int main(void)
{
    int a[SIZE] = { 0, 0, 0, 0 };
    int b[SIZE] = { 0 };
    int c[SIZE] = { 5 };

    printf("c[0]: %i\n", c[0]);
    printf("c[1]: %i\n", c[1]);
    printf("c[2]: %i\n", c[2]);
    printf("c[3]: %i\n", c[3]);

    return 0;
}