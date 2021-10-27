#include <stdio.h>
#include <stdlib.h>

#define ARRAYLEN(x) (sizeof(x) / sizeof(x[0]))

int main()
{
    int vetor[3][3], cont = 0;

    for (int i = 0; i < ARRAYLEN(vetor); i++) {
        for (int j = 0; j < ARRAYLEN(vetor[i]); j++) {
            scanf("%i", &vetor[i][j]);
        }
    }

    for (int i = 0; i < ARRAYLEN(vetor); i++) {
        for (int j = 0; j < ARRAYLEN(vetor[i]); j++) {
            printf("%i \t", vetor[i][j]);
        }

        printf("\n");
    }

    return 0;
}
