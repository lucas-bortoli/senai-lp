#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    // OIA A PEGADINHA!!!!!!!
    // O enunciado quer NÚMEROS, não apenas INTEIROS.
    // Quase entreguei errado
    // Agora tenho que atualizar todos os scanf() e printf()
    double nums[10];

    // Iterar sobre toda a extensão do vetor
    for (int i = 0; i < (sizeof nums / sizeof *nums); i++) {
        printf("#%i >> ", i + 1);
        scanf("%lf", &nums[i]);
        fflush(stdin);
    }

    // Mostrar na ordem em que foram digitados
    printf("N.  | Valor\n");
    printf("====|======\n");
    for (int j = 0; j < (sizeof nums / sizeof *nums); j++) {
        printf("#%-2i | %f\n", j + 1, nums[j]);
    }

    return 0;
}
