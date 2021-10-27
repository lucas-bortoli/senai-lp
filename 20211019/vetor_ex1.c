#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numeros[15] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150 };
    int a_ser_procurado;
    bool encontrado;

    printf("Dê o número a ser procurado no vetor: \n");
    scanf("%i", &a_ser_procurado);

    for (int i = 0; i < (sizeof(numeros) / sizeof(numeros[0])); i++) {
        if (a_ser_procurado == numeros[i]) {
            printf("Foi encontrado na posição %i\n", i);
            encontrado = true;
        }
    }

    if (!encontrado) {
        printf("Não foi encontrado\n");
    }

    return 0;
}
