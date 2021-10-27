#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define ARRAYLEN(x) (sizeof(x) / sizeof(x[0]))

struct Ponto {
    double x;
    double y;
};

struct Rect {
    // ponto da esquerda superior
    struct Ponto se;
    // ponto da direita inferior
    struct Ponto id;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // usar pontos como separadores decimais
    setlocale(LC_NUMERIC, "English");

    struct Rect rect;
    double area, diagonal;

    printf("Digite a posi��o x do ponto superior esquerdo do ret�ngulo: ");
    scanf("%lf", &(rect.se.x));

    printf("Digite a posi��o y do ponto superior esquerdo do ret�ngulo: ");
    scanf("%lf", &(rect.se.y));

    printf("Digite a posi��o x do ponto inferior direito do ret�ngulo: ");
    scanf("%lf", &(rect.id.x));

    printf("Digite a posi��o y do ponto inferior direito do ret�ngulo: ");
    scanf("%lf", &(rect.id.y));

    area = (rect.id.x - rect.se.x) * (rect.id.y - rect.se.y);
    diagonal = sqrt(pow(rect.id.x - rect.se.y, 2) + pow(rect.id.y - rect.se.y, 2));

    printf("\n�rea do ret�ngulo    : %lf u.a\n", area);
    printf("Diagonal do ret�ngulo: %lf un.\n", diagonal);

    return 0;
}
