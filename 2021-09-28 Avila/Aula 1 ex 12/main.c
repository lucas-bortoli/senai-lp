#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[64];
    char tipo[32];
    int dias;

    printf("Dê o nome do usuário: ");
    fflush(stdin);
    scanf("%s", &nome);

    do {
        printf("Dê o tipo de usuário (professor/aluno): ");
        fflush(stdin);
        scanf("%s", &tipo);
    } while (strcmp(tipo, "aluno") && strcmp(tipo, "professor"));

    // se é um aluno
    if (strcmp(tipo, "aluno")) {
        dias = 3;
    } else {
        // é professor
        dias = 10;
    }

    printf("a. Nome: %s\nb. Tipo: %s\nc. Dias: %i\n", nome, tipo, dias);

    return 0;
}
