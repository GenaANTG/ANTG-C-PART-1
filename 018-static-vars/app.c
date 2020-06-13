#include <stdio.h>

void proc(void)
{
    static int counter = 0;
    ++counter;
    printf("counter: %i\n", counter);
}

int main(void)
{
    proc();
    proc();
    proc();
    proc();

    return 0;
}