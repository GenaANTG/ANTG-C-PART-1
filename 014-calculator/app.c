#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
double div(double, double);

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}

int main(void)
{
    printf("sum: %i\n", sum(5, 7));
    printf("sub: %i\n", sub(10, 15));
    printf("mul: %i\n", mul(2, 3));
    printf("div: %.2lf\n", div(10.0, 3.0));

    return 0;
}