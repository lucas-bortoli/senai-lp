#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 20

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[TAMANHO];

    int pos_menor = 0;
    int pos_maior = 0;

    // zerar o vetor
    memset(&vet, 0, sizeof vet);

    for (int i = 0; i < TAMANHO; i++) {
        printf("Dê o %i° elemento: ", i + 1);
        scanf("%i", &vet[i]);

        if (vet[i] < vet[pos_menor]) pos_menor = i;
        if (vet[i] > vet[pos_maior]) pos_maior = i;
    }

    printf("Maior elemento: %i, posição %i\n", vet[pos_maior], pos_maior);
    printf("Menor elemento: %i, posição %i\n", vet[pos_menor], pos_menor);

    return 0;
}
