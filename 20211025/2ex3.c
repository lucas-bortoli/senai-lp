#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 100

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[TAMANHO];

    int num_impares = 0;

    for (int i = 0; i < TAMANHO; i++) {
        printf("D� o %i� elemento: ", i + 1);
        scanf("%i", &vet[i]);

        if (vet[i] % 2 != 0)
            num_impares++;
    }

    printf("N�mero de elementos �mpares no vetor: %i\n", num_impares);

    return 0;
}
