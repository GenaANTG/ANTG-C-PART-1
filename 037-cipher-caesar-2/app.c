#include <stdio.h>

#define ENCRYPTED_MESSAGE "SVVRZSPRLFVBOHJRLKTL"
#define ALPHABET_SIZE 26
#define CIPHER_KEY 1
#define EOL ""

int main(void)
{
    char alphabet_encrypted[ALPHABET_SIZE] = { '\0' };
    char alphabet[ALPHABET_SIZE] = { 
        'A', 'B', 'C', 'D', 'E', 'F', 
        'G', 'H', 'I', 'J', 'K', 'L', 
        'M', 'N', 'O', 'P', 'Q', 'R', 
        'S', 'T', 'U', 'V', 'W', 'X', 
        'Y', 'Z'
    };

    // "ABC" -> 1 -> "BCD"
    // "ABC" -> 3 -> "DEF"

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        printf("[%c]", alphabet[i]);
    }

    puts(EOL);

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        int offset = (i + CIPHER_KEY) % ALPHABET_SIZE;
        alphabet_encrypted[i] = alphabet[offset];
        printf("[%c]", alphabet_encrypted[i]);
    }

    puts(EOL);

    return 0;
}
