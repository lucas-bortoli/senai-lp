#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("N�mero %i � par\n", i);
        } else {
            printf("N�mero %i � �mpar\n", i);
        }
    }

    return 0;
}
