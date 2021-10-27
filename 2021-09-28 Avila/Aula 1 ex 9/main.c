#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Dê o número: ");
    scanf("%i", &num);

    if (num % 5 == 0) {
        printf("É divisível por 5.\n");
    } else {
		printf("Não é divisível por 5.\n");
    }

    return 0;
}
