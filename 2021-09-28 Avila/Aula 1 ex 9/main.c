#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("D� o n�mero: ");
    scanf("%i", &num);

    if (num % 5 == 0) {
        printf("� divis�vel por 5.\n");
    } else {
		printf("N�o � divis�vel por 5.\n");
    }

    return 0;
}
