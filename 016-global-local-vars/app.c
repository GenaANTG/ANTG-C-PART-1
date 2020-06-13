#include <stdio.h>

int global = 9999;

int function(void)
{
    puts("function: function");

    int local = 100;

    printf("global: %i\n", global);
    printf("local: %i\n", local);

    return 0;
}

int main(void)
{
    puts("function: main");

    int local = 200;

    printf("global: %i\n", global);
    printf("local: %i\n", local);

    function();

    return 0;
}