#include <stdio.h>

#define CONST_VALUE 50
#define PASSWORD "qwerty2020"

int main(void)
{
    int a = 10;
    const int b = 10;

    a = 50;

    printf("variable: %i\n", a);
    printf("constant: %i\n", b);
    printf("password: %s\n", PASSWORD);
    printf("define constant: %i\n", CONST_VALUE);

    return 0;
}