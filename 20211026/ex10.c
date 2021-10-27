#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Macro para determinar quantas "casas" um vetor tem.
#define VETOR_LEN(x) (sizeof x / sizeof *x)

#define NUMERO_OPERACOES 10

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    float temperaturas_kelvin[NUMERO_OPERACOES];
    float temperaturas_celsius[NUMERO_OPERACOES];

    // zerar os vetore de temperaturas (como ele é alocado na stack, pode
    // conter valores "lixo")
    memset(&temperaturas_kelvin, 0, sizeof temperaturas_kelvin);
    memset(&temperaturas_celsius, 0, sizeof temperaturas_celsius);

    printf("Digite as temperaturas em Kelvin a serem convertidas\n");
    printf("Celsius. Não são permitidos valores negativos.\n\n");

    printf(" # | Temperatura (K)\n");
    printf("===|================\n");

    for (int i = 0; i < NUMERO_OPERACOES; i++) {
        // previnir que o usuário dê valores negativos
        do {
            printf("%2i | ", i + 1);
            scanf("%f", &temperaturas_kelvin[i]);
        } while (temperaturas_kelvin[i] < 0);

        // converter
        temperaturas_celsius[i] = temperaturas_kelvin[i] - 273.15;
    }

    // limpar a tela; só vai funcionar no Windows
    system("cls");

    // desenhar a tabela
    printf(" # | Temperatura (K) | Temperatura (°C)\n");
    printf("===|=================|=================\n");

    for (int j = 0; j < NUMERO_OPERACOES; j++) {
        printf("%2i | %15.2f | %16.2f\n", j + 1, temperaturas_kelvin[j], temperaturas_celsius[j]);
    }

    return 0;
}
