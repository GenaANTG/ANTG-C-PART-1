#include <stdio.h>

int sum(int, int);

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int sum1 = sum(2, 2);
    int sum2 = sum(100, 200);
    int sum3 = sum(13, 17);

    printf("Result: %i\n", sum1);
    printf("Result: %i\n", sum2);
    printf("Result: %i\n", sum3);

    return 0;
}