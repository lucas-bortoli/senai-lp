#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n;

	printf("D� o n�mero:\nint numero = ");
	scanf("%i", &n);

	printf("N�mero dado: %i\n", n);

    return 0;
}
