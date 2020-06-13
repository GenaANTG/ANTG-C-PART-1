#include <stdio.h>

#define SIZE 10
#define PRICE 100

/**
 * Init Array
 * @param int array[]
 * @param int length
 * @param int value
 */
void init_array(int array[], int length, int value)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = value;
    }
}

/**
 * Print Array
 * @param int array[]
 * @param int length
 */
void print_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("array[%i]: %i\n", i, array[i]);
    }
}

int main(void)
{
    int prices[SIZE] = { 0 };
    int quantity[40] = { 0 };

    init_array(prices, SIZE, PRICE);
    init_array(quantity, 40, 10);

    puts("prices array");
    print_array(prices, SIZE);

    puts("quantity array");
    print_array(quantity, 40);

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