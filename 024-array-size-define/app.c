#include <stdio.h>

#define SIZE 5

int main(void)
{
    int prices[SIZE] = { 100, 200, 300, 400, 500 };

    printf("prev element: %i\n", prices[SIZE-2]);
    printf("last element: %i\n", prices[SIZE-1]);

    return 0;
}