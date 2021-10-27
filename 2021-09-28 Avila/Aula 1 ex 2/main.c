#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n;

	printf("Dê o número:\nint numero = ");
	scanf("%i", &n);

	printf("Número dado: %i\n", n);

    return 0;
}
