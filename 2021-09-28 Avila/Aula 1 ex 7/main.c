#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, soma;

    printf("D� o primeiro n�mero: ");
    scanf("%i", &n1);


    printf("D� o segundo n�mero: ");
    scanf("%i", &n2);

    soma = n1 + n2;

    if (soma > 20) {
        printf("\"\"\"Resultado\"\"\": %i\n", soma - 5);
    }

    return 0;
}
