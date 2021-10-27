#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int v1[TAMANHO], v2[TAMANHO], v3[TAMANHO * 2];

    for (int i = 0; i < TAMANHO; i++) {
        printf("1° vetor | %i° elemento: ", i + 1);
        scanf("%i", &v1[i]);

        v3[i * 2] = v1[i];
    }

    for (int j = 0; j < TAMANHO; j++) {
        printf("2° vetor | %i° elemento: ", j + 1);
        scanf("%i", &v2[j]);

        v3[j * 2 + 1] = v2[j];
    }

    // Desenhar os vetores horizontalmente
    printf("1° :: ");
    for (int k = 0; k < TAMANHO; k++) {
        printf("%i", v1[k]);
        if (k != TAMANHO - 1) printf(", ");
    }

    printf("\n2° :: ");
    for (int l = 0; l < TAMANHO; l++) {
        printf("%i", v2[l]);
        if (l != TAMANHO - 1) printf(", ");
    }

    printf("\n3° :: ");
    for (int m = 0; m < TAMANHO * 2; m++) {
        printf("%i", v3[m]);
        if (m != TAMANHO * 2 - 1) printf(", ");
    }

    return 0;
}
