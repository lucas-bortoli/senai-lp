#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define ARRAYLEN(x) (sizeof(x) / sizeof(x[0]))

struct Ponto {
    double x;
    double y;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // usar pontos como separadores decimais
    setlocale(LC_NUMERIC, "English");

    struct Ponto p;
    double dist;

    printf("Digite a posição x do ponto: ");
    scanf("%lf", &(p.x));

    printf("Digite a posição y do ponto: ");
    scanf("%lf", &(p.y));

    dist = sqrt(pow(p.x, 2) + pow(p.y, 2));

    printf("Distância do ponto P=(%lf, %lf) até (0, 0): %lf unidades\n", p.x, p.y, dist);

    return 0;
}
