#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "English");

    int j = 1;
    int k = 0;
    int l = 1;

    for (int i = 0; i <= 15; i++) {
        printf("%i\n", l);

        l = j + k;
        k = j;
        j = l;
    }

    return 0;
}
