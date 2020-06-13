#include <stdio.h>

int main(void)
{
    int local = 5;
    int a[] = { 1, 2, 3, 4 };
            //  0  1  2  3  <- indexes
    double b[] = { 1.1, 2.2, 3.3, 4.4 };
    char gena[] = { 'G', 'E', 'N', 'A' };
    char antg[] = { 'A', 'N', 'T', 'G' };

    puts("variable: local");
    printf("local: %i\n", local);

    puts("----");
    
    puts("array: int a[4]");
    printf("a[0]: %i\n", a[0]);
    printf("a[1]: %i\n", a[1]);
    printf("a[2]: %i\n", a[2]);
    printf("a[3]: %i\n", a[3]);

    puts("----");

    puts("array: double b[4]");
    printf("b[0]: %.1lf\n", b[0]);
    printf("b[1]: %.1lf\n", b[1]);
    printf("b[2]: %.1lf\n", b[2]);
    printf("b[3]: %.1lf\n", b[3]);

    puts("----");

    puts("array: char gena[4]");
    printf("gena[0]: %c\n", gena[0]);
    printf("gena[1]: %c\n", gena[1]);
    printf("gena[2]: %c\n", gena[2]);
    printf("gena[3]: %c\n", gena[3]);

    puts("----");

    puts("array: char antg[4]");
    printf("antg[0]: %c\n", antg[0]);
    printf("antg[1]: %c\n", antg[1]);
    printf("antg[2]: %c\n", antg[2]);
    printf("antg[3]: %c\n", antg[3]);

    return 0;
}