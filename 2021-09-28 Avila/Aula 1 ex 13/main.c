#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int percurso;
    double consumo;
    char carro;

    printf("Dê o tamanho do percurso, em km: ");
    fflush(stdin);
    scanf("%i", &percurso);

    do {
        printf("Dê o tipo de carro (A/B/C): ");carro = tolower(carro);
        fflush(stdin);
        scanf("%c", &carro);
        carro = tolower(carro);
    } while (carro != 'a' && carro != 'b' && carro != 'c');

    switch (carro) {
        case 'a':
            consumo = percurso / 8.0;
            break;
        case 'b':
            consumo = percurso / 9.0;
            break;
        case 'c':
            consumo = percurso / 12.0;
            break;
    }

    printf("Consumo: %f L\n", consumo);
    fflush(stdin);

    return 0;
}
