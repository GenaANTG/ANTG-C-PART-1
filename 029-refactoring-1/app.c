#include <stdio.h>

#define SIZE 10
#define PRICE 100

void init_array(int array[], int length, int value)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = value;
    }
}

int main(void)
{
    int prices[SIZE] = { 0 };
    int quantity[40] = { 0 };

    init_array(prices, SIZE, PRICE);
    init_array(quantity, 40, 10);

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