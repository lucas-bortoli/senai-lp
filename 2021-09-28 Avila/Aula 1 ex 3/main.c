#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float n;

	printf("D� o n�mero real:\nfloat numero = ");
	scanf("%f", &n);

	printf("N�mero dado: %f\n", n);

    return 0;
}
