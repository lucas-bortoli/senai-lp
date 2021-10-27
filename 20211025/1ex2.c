#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valores[10];
    int impares[10];
    int num_impares = 0;

    for (int i = 0; i < (sizeof valores) / (sizeof *valores); i++) {
        printf("D� o %i� n�mero: ", i + 1);
        scanf("%i", &valores[i]);
        fflush(stdin);

        // verificar se � �mpar
        if (valores[i] % 2 != 0) {
            impares[num_impares] = valores[i];
            num_impares++;
        }
    }

    system("cls");

    // mostrar apenas �mpares
    for (int j = 0; j < num_impares; j++) {
        printf("%i\n", impares[j]);
    }

    return 0;
}
