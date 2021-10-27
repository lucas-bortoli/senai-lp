#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, soma;

    printf("Dê o primeiro número: ");
    scanf("%i", &n1);


    printf("Dê o segundo número: ");
    scanf("%i", &n2);

    soma = n1 + n2;

    if (soma > 10) {
        printf("Resultado: %i\n", soma);
    }

    return 0;
}
