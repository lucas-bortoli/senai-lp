#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float salario_atual, reajuste, salario_final;

	printf("D� o sal�rio atual do funcion�rio: R$ ");
	scanf("%f", &salario_atual);


	printf("D� a porcentagem de reajuste do sal�rio: ");
	scanf("%f", &reajuste);

	salario_final = salario_atual * (1 + reajuste / 100);

	printf("Novo sal�rio: R$ %f\n", salario_final);

    return 0;
}
