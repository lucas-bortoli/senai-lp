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
        printf("Dê o %i° número: ", i + 1);
        scanf("%i", &valores[i]);
        fflush(stdin);

        if (i != 0) {
            if (valores[i] < valores[0]) menores_que_o_primeiro++;
            if (valores[i] = valores[0]) iguais_ao_primeiro++;
            if (valores[i] > valores[0]) maiores_que_o_primeiro++;
        }
    }

    system("cls");

    printf("%i são maiores que o primeiro número\n", maiores_que_o_primeiro);
    printf("%i são iguais ao primeiro número\n", iguais_ao_primeiro);
    printf("%i são menores que o primeiro número\n", menores_que_o_primeiro);

    return 0;
}
