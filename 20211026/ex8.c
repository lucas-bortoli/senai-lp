#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 20

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    int nums[TAMANHO];

    int pares = 0;
    int impares = 0;
    int maiores_50 = 0;
    int menores_7 = 0;

    // Ler os números
    for (int i = 0; i < TAMANHO; i++) {
        printf("#%i >> ", i + 1);
        scanf("%i", &nums[i]);
        fflush(stdin);

        if (nums[i] % 2 == 0) pares++;
        if (nums[i] % 2 != 0) impares++;
        if (nums[i] > 50) maiores_50++;
        if (nums[i] < 7) menores_7++;
    }

    printf("Números pares: %i\n", pares);
    printf("Números ímpares: %i\n", impares);
    printf("Maiores que 50: %i\n", maiores_50);
    printf("Menores que 7: %i\n", menores_7);

    return 0;
}
