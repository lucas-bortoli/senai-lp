#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 10

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    int nums[TAMANHO];
    int soma = 0;

    // Iterar sobre toda a extens�o do vetor
    for (int i = 0; i < TAMANHO; i++) {
        printf("#%i >> ", i + 1);
        scanf("%i", &nums[i]);
        fflush(stdin);

        // somar aqui mesmo, n�o � necess�rio 2 repeti��es
        soma = soma + nums[i];
    }

    // S� vai funcionar no Windows...
    system("cls");

    printf("N.   | Valor\n");
    printf("=====|======\n");

    for (int j = 0; j < TAMANHO; j++) {
        printf("#%-3i | %i\n",  j + 1, nums[j]);
    }

    printf("=====|======\n");
    printf("Soma | %i", soma);

    return 0;
}
