#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 8

/*

    Esse é só o ex3 modificado (para atender o tamanho do vetor ali em cima),
    pois acabei resolvendo os dois de uma vez só.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    int nums[TAMANHO];

    int a_ser_procurado;
    int posicoes_encontrado[TAMANHO];
    int vezes_encontrado = 0;

    // Iterar sobre toda a extensão do vetor
    for (int i = 0; i < TAMANHO; i++) {
        printf("#%i >> ", i + 1);
        scanf("%i", &nums[i]);
        fflush(stdin);
    }

    printf("Dê o valor a ser procurado: ");
    scanf("%i", &a_ser_procurado);

    // Procurar o valor dentro do vetor, guardando as posições onde foi
    // encontrado.
    for (int j = 0; j < TAMANHO; j++) {
        if (nums[j] == a_ser_procurado) {
            posicoes_encontrado[vezes_encontrado] = j;
            vezes_encontrado++;
        }
    }

    if (vezes_encontrado > 0) {
        printf("Encontrado %i vezes nas posições ", vezes_encontrado);

        // Mostrar as posições onde o valor foi encontrado
        for (int k = 0; k < vezes_encontrado; k++) {
            printf("#%i", posicoes_encontrado[k] + 1);

            // Não mostrar ", " no último elemento
            if (k != vezes_encontrado - 1) printf(", ");
        }
    } else {
        printf("O número não se encontra no vetor.\n");
    }

    return 0;
}
