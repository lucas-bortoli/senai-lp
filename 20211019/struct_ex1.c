#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ARRAYLEN(x) (sizeof(x) / sizeof(x[0]))

struct Pessoa {
    char nome[32];
    char endereco[64];
    int idade
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // usar pontos como separadores decimais
    setlocale(LC_NUMERIC, "English");

    struct Pessoa p;

    printf("Digite o nome: ");
    scanf("%s", &p.nome);

    printf("Digite a idade: ");
    scanf("%i", &p.idade);

    printf("Digite o endereço: ");
    scanf("%s", &p.endereco);

    printf("Nome     | %s\n", p.nome);
    printf("Idade    | %i\n", p.idade);
    printf("Endereço | %s\n", p.endereco);

    return 0;
}
