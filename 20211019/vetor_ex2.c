#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letras[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };

    for (int i = 0; i < (sizeof(letras) / sizeof(letras[0])); i++) {
        printf("%i. %c\n", i + 1, letras[i]);
    }

    return 0;
}
