#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("D� o n�mero: ");
    scanf("%i", &num);

    if (num % 3 == 0) {
        printf("� m�ltiplo de 3.\n");
    } else {
		printf("N�o � m�ltiplo de 3.\n");
    }

    return 0;
}
