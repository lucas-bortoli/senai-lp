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

    printf("D� o nome do usu�rio: ");
    fflush(stdin);
    scanf("%s", &nome);

    do {
        printf("D� o tipo de usu�rio (professor/aluno): ");
        fflush(stdin);
        scanf("%s", &tipo);
    } while (strcmp(tipo, "aluno") && strcmp(tipo, "professor"));

    // se � um aluno
    if (strcmp(tipo, "aluno")) {
        dias = 3;
    } else {
        // � professor
        dias = 10;
    }

    printf("a. Nome: %s\nb. Tipo: %s\nc. Dias: %i\n", nome, tipo, dias);

    return 0;
}
