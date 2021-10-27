#include <stdio.h>
#include <stdlib.h>

#define LEN(x) (sizeof(x) / sizeof(x[0]))

// desenha uma lista de refeições e retorna o índice dado pelo usuário
int tabela(char **pratos, int qnt_pratos) {
    int escolha_prato;

    do {
        for (int i = 0; i < qnt_pratos; i++) {
                printf("%i. %s\n", i + 1, pratos[i]);
        }

        // desenhar escolha de pratos
        printf("Escolha o prato principal [1-%i] > ", qnt_pratos);
        scanf("%i", &escolha_prato);
    } while (escolha_prato <= 0 || escolha_prato > qnt_pratos);

    return escolha_prato - 1;
}

int main()
{
    char *pratos[] = {"Vegetariano", "Peixe", "Frango", "Carne"};
    char *sobremesas[] = {"Abacaxi", "Sorvete Diet", "Mousse Diet", "Mousse chocolate"};

    int prato = tabela(pratos, LEN(pratos));
    int sobremesa = tabela(sobremesas, LEN(sobremesas));

    printf("Prato escolhido: %s\n", pratos[prato]);

    return 0;
}
