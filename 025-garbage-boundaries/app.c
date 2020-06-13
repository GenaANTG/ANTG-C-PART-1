#include <stdio.h>

#define SIZE 4

int main(void)
{
    int a; // ! memory garbage
    int b[SIZE]; // ! memory garbage

    printf("a: %i\n", a);

    printf("b[0]: %i\n", b[0]); // ! memory garbage
    printf("b[1]: %i\n", b[1]); // ! memory garbage
    printf("b[2]: %i\n", b[2]); // ! memory garbage
    printf("b[3]: %i\n", b[SIZE-1]); // ! memory garbage

    // ! memory corrupt
    // ! segmentation fault
    // printf("b[4]: %i\n", b[4]);
    // printf("b[5]: %i\n", b[5]);
    // printf("b[6]: %i\n", b[6]);
    // printf("b[7]: %i\n", b[7]);

    return 0;
}