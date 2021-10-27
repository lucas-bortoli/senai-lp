#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char strs[2][17];

    printf("Digite a 1° string: ");
    gets(&strs[0]);

    printf("Digite a 2° string: ");
    gets(&strs[1]);

    printf("1° | %s\n", strs[0]);
    printf("2° | %s\n", strs[1]);

    return 0;
}
