#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float valor, desconto, valor_final;

	printf("D� o pre�o do produto: R$ ");
	scanf("%f", &valor);


	printf("D� a porcentagem de desconto desejada: ");
	scanf("%f", &desconto);

	valor_final = valor - valor * (desconto / 100);

	printf("Valor final: R$ %f\n", valor_final);

    return 0;
}
