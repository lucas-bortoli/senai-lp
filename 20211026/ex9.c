#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Macro para determinar quantas "casas" um vetor tem.
#define VETOR_LEN(x) (sizeof x / sizeof *x)

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    // 32 é espaço suficiente para as strings
    char dias_semana[7][32] = { "domingo", "segunda-feira", "terça-feira",
                                "quarta-feira", "quinta-feira",
                                "sexta-feira", "sábado" };

    float temperaturas[7];
    float soma_temperaturas = 0.0;
    float media;

    // zerar o vetor de temperaturas (como ele é alocado na stack, pode
    // conter valores "lixo")
    memset(&temperaturas, 0, sizeof temperaturas);

    printf("Digite as temperaturas de cada dia da semana\n");
    printf("Use pontos (.) para indicar números quebrados (ex 36.5)\n\n");

    printf("# dia |      Nome do dia | Temperatura (°C)\n");
    printf("======|==================|=================\n");

    for (int i = 0; i < VETOR_LEN(dias_semana); i++) {
        printf("%5i | %16s | ", i + 1, dias_semana[i]);
        scanf("%f", &temperaturas[i]);

        soma_temperaturas += temperaturas[i];
    }

    // detalhe: usar ".0" no divisor, senão ocorre uma divisão inteira (floor)
    media = soma_temperaturas / 7.0;

    printf("===========================================\n");
    printf("Os seguintes dias ficaram acima da média de\n");
    printf("temperatura (média = %.2f °C):\n", media);
    printf("===========================================\n");
    for (int j = 0; j < VETOR_LEN(dias_semana); j++) {
        if (temperaturas[j] > media) {
            // a temperatura desse dia ficou acima da média
            printf("%5i | %16s | %.2f °C\n", j + 1, dias_semana[j], temperaturas[j]);
        }
    }

    return 0;
}
