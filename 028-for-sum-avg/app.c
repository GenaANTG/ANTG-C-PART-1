#include <stdio.h>

#define SIZE 15
#define PRICE 55

int main(void)
{
    int prices[SIZE] = { 0 };

    for (int i = 0; i < SIZE; i++)
    {
        prices[i] = PRICE;
    }

    prices[SIZE-1] = 33;
    prices[SIZE-2] = 51;

    for (int i = 0; i < SIZE; i++)
    {
        printf("prices[%i]: %i\n", i, prices[i]);
    }

    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        sum += prices[i];
    }

    double avg = (double)sum / SIZE;

    printf("sum: %i\n", sum);
    printf("avg: %lf\n", avg);

    return 0;
}