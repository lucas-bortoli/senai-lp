#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 10

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    // 1° vetor:   números
    // 2° vetor: + números
    // 3º vetor: = resultado
    int nums[TAMANHO][3];

    // Ler os números nos dois vetores
    for (int v = 0; v <= 1; v++) {
        for (int i = 0; i < TAMANHO; i++) {
            printf("vetor #%i, posição #%i >> ", v + 1, i + 1);
            scanf("%i", &nums[v][i]);
            fflush(stdin);
        }
    }

    // Só no Windows...
    system("cls");

    printf("  # | Vetor 1 | Vetor 2 | Soma\n");
    printf("====|=========|=========|=====\n");

    // Somar os dois vetores de cima
    for (int j = 0; j < TAMANHO; j++) {
        nums[2][j] = nums[0][j] + nums[1][j];

        // escrever na tela imediatamente
        printf("%3i | %7i | %7i | %4i\n", j + 1, nums[0][j], nums[1][j], nums[2][j]);
    }


    return 0;
}
