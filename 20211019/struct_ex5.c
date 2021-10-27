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
    struct Ponto p;

    printf("Digite a posição x do ponto superior esquerdo do retângulo: ");
    scanf("%lf", &(rect.se.x));

    printf("Digite a posição y do ponto superior esquerdo do retângulo: ");
    scanf("%lf", &(rect.se.y));

    printf("Digite a posição x do ponto inferior direito do retângulo: ");
    scanf("%lf", &(rect.id.x));

    printf("Digite a posição y do ponto inferior direito do retângulo: ");
    scanf("%lf", &(rect.id.y));

    printf("Digite a posição x do ponto: ");
    scanf("%lf", &(p.x));

    printf("Digite a posição y do ponto: ");
    scanf("%lf", &(p.y));


    if (p.x >= rect.se.x && p.y <= rect.id.x && p.y >= rect.se.y && p.y <= rect.id.y) {
        printf("O ponto está dentro do retângulo.\n");
    } else {
        printf("O ponto não está dentro do retângulo.\n");
    }

    return 0;
}
