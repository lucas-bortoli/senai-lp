#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("D� o n�mero: ");
    scanf("%i", &num);

    if (num % (3 * 7) == 0) {
        printf("� divis�vel por 3 e por 7.\n");
    } else {
		printf("N�o � divis�vel por 3 e por 7.\n");
    }

    return 0;
}
