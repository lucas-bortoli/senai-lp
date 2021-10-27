#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define QUANTIDADE_PESSOAS 10

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    char nomes[64][QUANTIDADE_PESSOAS];
    double salarios[QUANTIDADE_PESSOAS];

    for (int i = 0; i < QUANTIDADE_PESSOAS; i++) {
        printf("NOME    > ");
        scanf("%s", nomes[i]);
        fflush(stdin);

        printf("SALÁRIO > R$ ");
        scanf("%lf", &salarios[i]);
        fflush(stdin);

        double imposto;

        if (salarios[i] < 1300.0) {
            printf("IRRF    : ISENTO\n");
        } else if (salarios[i] >= 1300 && salarios[i] < 2300.0) {
            printf("IRRF    : R$ %f\n", 0.10 * salarios[i]);
        } else {
            printf("IRRF    : R$ %f\n", 0.15 * salarios[i]);
        }

        printf("\n");
    }

    return 0;
}
