#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Dê o número: ");
    scanf("%i", &num);

    if (num % 3 == 0) {
        printf("É múltiplo de 3.\n");
    } else {
		printf("Não é múltiplo de 3.\n");
    }

    return 0;
}
