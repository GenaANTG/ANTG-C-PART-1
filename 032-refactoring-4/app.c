#include <stdio.h>

#define SIZE_PRICES 20
#define SIZE_QUANTITIES 20
#define PRICE 40
#define QUANTITY 80

/**
 * Init Array
 * @param int array[]
 * @param int length
 * @param int value
 */
void init_array(int array[], const int length, const int value)
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
void print_array(const int array[], const int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("array[%i]: %i\n", i, array[i]);
    }
}

/**
 * Get Total Amount
 * @param int array[]
 * @param int length
 * @return int
 */
int get_total_amount(const int array[], const int length)
{
    int total = 0;

    for (int i = 0; i < length; i++)
    {
        total += array[i];
    }

    return total;
}

/**
 * Get Average Value
 * @param int total_amount
 * @param int length
 * @return double
 */
double get_average_value(const int total_amount, const int length)
{
    return (double)total_amount / length;
}

int main(void)
{
    int prices[SIZE_PRICES] = {0};
    int quantities[SIZE_QUANTITIES] = {0};

    init_array(prices, SIZE_PRICES, PRICE);
    init_array(quantities, SIZE_QUANTITIES, QUANTITY);

    puts("prices array");
    print_array(prices, SIZE_PRICES);

    puts("quantities array");
    print_array(quantities, SIZE_QUANTITIES);

    int prices_total_amount = get_total_amount(prices, SIZE_PRICES);
    int quantities_total_amount = get_total_amount(quantities, SIZE_QUANTITIES);

    printf("prices total amount: %i\n", prices_total_amount);
    printf("quantities total amount: %i\n", quantities_total_amount);
    printf("prices average value: %lf\n", get_average_value(prices_total_amount, SIZE_PRICES));
    printf("quantities average value: %lf\n", get_average_value(quantities_total_amount, SIZE_QUANTITIES));

    return 0;
}
