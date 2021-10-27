#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Dê o número: ");
    scanf("%i", &num);

    if (num % (3 * 7) == 0) {
        printf("É divisível por 3 e por 7.\n");
    } else {
		printf("Não é divisível por 3 e por 7.\n");
    }

    return 0;
}
