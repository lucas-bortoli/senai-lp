#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;
	float media;

	n1 = 5;
	n2 = 8;
	n3 = 12;

	media = (n1 + n2 + n3) / 3;

	printf("Média entre %i, %i e %i: %f \n", n1, n2, n3, media);

    return 0;
}
