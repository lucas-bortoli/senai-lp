#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double sal_bruto, val_prestacao;

    printf("D� o sal�rio bruto do funcion�rio: R$");
    scanf("%d", &sal_bruto);


    printf("D� o valor da presta��o: R$");
    scanf("%d", &val_prestacao);

    if (sal_bruto * 0.3 > val_prestacao) {
        printf("O valor da presta��o � maior que 30% do sal�rio bruto. O empr�stimo n�o deve ser concedido.");
    } else {
        printf("O empr�stimo pode ser concedido.");
    }

    return 0;
}
