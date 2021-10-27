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

    struct Ponto p1, p2;
    double dist;

    printf("Digite a posição x do primeiro ponto: ");
    scanf("%lf", &(p1.x));

    printf("Digite a posição y do primeiro ponto: ");
    scanf("%lf", &(p1.y));

    printf("Digite a posição x do segundo ponto: ");
    scanf("%lf", &(p2.x));

    printf("Digite a posição y do segundo ponto: ");
    scanf("%lf", &(p2.y));

    dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.x, 2));

    printf("Distância do ponto P=(%lf, %lf) até (%lf, %lf): %lf unidades\n", p1.x, p1.y, p2.x, p2.y, dist);

    return 0;
}
