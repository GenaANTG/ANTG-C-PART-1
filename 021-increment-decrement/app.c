#include <stdio.h>

int main(void)
{
    int a = 0;

    // increment / увеличение
    // prefix
    puts("! prefix increment");
    printf("a: %i\n", ++a);
    printf("a: %i\n", ++a);
    printf("a: %i\n", ++a);

    // decrement / уменьшение
    // prefix
    puts("! prefix decrement");
    printf("a: %i\n", --a);
    printf("a: %i\n", --a);
    printf("a: %i\n", --a);

    a = 0;

    // increment / увеличение
    // postfix
    puts("! postfix increment");
    printf("a: %i\n", a++);
    printf("a: %i\n", a++);
    printf("a: %i\n", a++);
    printf("a: %i\n", a);

    // decrement / уменьшение
    // postfix
    puts("! postfix decrement");
    printf("a: %i\n", a--);
    printf("a: %i\n", a--);
    printf("a: %i\n", a--);
    printf("a: %i\n", a);

    puts("----");

    a = 0;

    // operation on ‘a’ may be undefined
    // printf("a: %i, a: %i\n", a++, a--, a--, a--);

    // okay
    a++;
    // printf("...");
    a--;
    // printf("...");
    a--;

    return 0;
}