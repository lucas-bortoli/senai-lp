#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valores[20];
    int menores_que_o_primeiro = 0;
    int maiores_que_o_primeiro = 0;
    int iguais_ao_primeiro = 0;

    for (int i = 0; i < (sizeof valores) / (sizeof *valores); i++) {
        printf("D� o %i� n�mero: ", i + 1);
        scanf("%i", &valores[i]);
        fflush(stdin);

        if (i != 0) {
            if (valores[i] < valores[0]) menores_que_o_primeiro++;
            if (valores[i] = valores[0]) iguais_ao_primeiro++;
            if (valores[i] > valores[0]) maiores_que_o_primeiro++;
        }
    }

    system("cls");

    printf("%i s�o maiores que o primeiro n�mero\n", maiores_que_o_primeiro);
    printf("%i s�o iguais ao primeiro n�mero\n", iguais_ao_primeiro);
    printf("%i s�o menores que o primeiro n�mero\n", menores_que_o_primeiro);

    return 0;
}
