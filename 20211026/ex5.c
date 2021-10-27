#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 15

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    int nums[TAMANHO];

    // Iterar sobre toda a extensão do vetor
    for (int i = 0; i < TAMANHO; i++) {
        printf("#%i >> ", i + 1);
        scanf("%i", &nums[i]);
        fflush(stdin);
    }

    // Só vai funcionar no Windows...
    system("cls");

    printf("N.   | Valor    * mostrando apenas valores\n");
    printf("=====|======      positivos\n");

    for (int j = 0; j < TAMANHO; j++) {
        // Mostrar apenas números positivos do vetor
        if (nums[j] >= 0)
            printf("#%-3i | %i\n",  j + 1, nums[j]);
    }

    return 0;
}
