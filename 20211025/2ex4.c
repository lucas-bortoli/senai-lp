#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomes[7][16] = { "domingo", "segunda-feira", "terça-feira", "quarta-feira", "quinta-feira", "sexta-feira", "sábado" };

    float dias[7];
    float soma = 0.0;
    float media;

    for (int i = 0; i < (sizeof dias / sizeof *dias); i++) {
        printf("Dê a temperatura, em °C, de %s: ", nomes[i]);
        scanf("%f", &dias[i]);

        soma += dias[i];
    }

    media = soma / 7.0;

    printf("Temperatura média: %f °C\n", media);
    printf("Os seguintes dias tiveram temperatura acima da média:\n");

    for (int j = 0; j < (sizeof dias / sizeof *dias); j++) {
        if (dias[j] > media) printf("  * %s\n", nomes[j]);
    }

    return 0;
}
