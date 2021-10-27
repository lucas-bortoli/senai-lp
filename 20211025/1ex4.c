#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[64];

    printf("Digite um nome: ");
    gets(&nome);
    printf("Nome digitado : %s\n", nome);

    return 0;
}
