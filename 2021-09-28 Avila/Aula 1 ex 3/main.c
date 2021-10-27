#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float n;

	printf("Dê o número real:\nfloat numero = ");
	scanf("%f", &n);

	printf("Número dado: %f\n", n);

    return 0;
}
