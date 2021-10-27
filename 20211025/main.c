#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomes[7][16] = { "domingo", "segunda-feira", "ter�a-feira", "quarta-feira", "quinta-feira", "sexta-feira", "s�bado" };

    float dias[7];
    float soma = 0.0;
    float media;

    for (int i = 0; i < (sizeof dias / sizeof *dias); i++) {
        printf("D� a temperatura, em �C, de %s: ", nomes[i]);
        scanf("%f", &dias[i]);

        soma += dias[i];
    }

    media = soma / 7.0;

    printf("Temperatura m�dia: %f �C\n", media);
    printf("Os seguintes dias tiveram temperatura acima da m�dia:\n");

    for (int j = 0; j < (sizeof dias / sizeof *dias); j++) {
        if (dias[j] > media) printf("  * %s\n", nomes[j]);
    }

    return 0;
}
