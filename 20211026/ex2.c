#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    double nums[10];

    // Iterar sobre toda a extensão do vetor
    for (int i = 0; i < (sizeof nums / sizeof *nums); i++) {
        printf("#%i >> ", i + 1);
        scanf("%lf", &nums[i]);
        fflush(stdin);
    }

    // Mostrar ao contrário ordem em que foram digitados
    printf("N.  | Valor       * ordem inversa\n");
    printf("====|============\n");
    for (int j = (sizeof nums / sizeof *nums); j > 0; j--) {
        printf("#%-2i | %f\n", (sizeof nums / sizeof *nums) - j + 1, nums[j - 1]);
    }

    return 0;
}
