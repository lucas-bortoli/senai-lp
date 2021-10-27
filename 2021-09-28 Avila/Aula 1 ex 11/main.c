#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double sal_bruto, val_prestacao;

    printf("Dê o salário bruto do funcionário: R$");
    scanf("%d", &sal_bruto);


    printf("Dê o valor da prestação: R$");
    scanf("%d", &val_prestacao);

    if (sal_bruto * 0.3 > val_prestacao) {
        printf("O valor da prestação é maior que 30% do salário bruto. O empréstimo não deve ser concedido.");
    } else {
        printf("O empréstimo pode ser concedido.");
    }

    return 0;
}
