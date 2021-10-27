#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float temp[10];
    float digitado;

    for (int contador = 0; contador < 10; contador++) {
        printf("%i. ", contador + 1);
        scanf("%f", &temp[contador]);
    }

    for (int contador = 0; contador < 10; contador++) {
        float cel = (temp[contador] - 32) / 1.8;
        printf("%i. %f °F = %f °C\n", contador + 1, temp[contador], cel);
    }

    return 0;
}
