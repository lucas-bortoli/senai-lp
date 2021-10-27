#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float salario_atual, reajuste, salario_final;

	printf("Dê o salário atual do funcionário: R$ ");
	scanf("%f", &salario_atual);


	printf("Dê a porcentagem de reajuste do salário: ");
	scanf("%f", &reajuste);

	salario_final = salario_atual * (1 + reajuste / 100);

	printf("Novo salário: R$ %f\n", salario_final);

    return 0;
}
