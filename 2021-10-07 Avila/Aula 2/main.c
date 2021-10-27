#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("Número %i é par\n", i);
        } else {
            printf("Número %i é ímpar\n", i);
        }
    }

    return 0;
}
