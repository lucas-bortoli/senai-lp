#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

#define LINHAS 5
#define COLUNAS 5

void configurar_console() {
    // Permitir acentos no console
    setlocale(LC_ALL, "Portuguese");

    // Usar "." como separador decimal -- prefer�ncia minha
    setlocale(LC_NUMERIC, "English");

    // permitir comandos VT-100 no console do Windows (cmd.exe) -- s� funciona
    // a partir do Windows 10 Anniversary Update
    // https://stackoverflow.com/a/51125110
    system(" ");
}

// ir para linha acima no console
void console_linha_cima() {
    printf("\x1b[A|");
}

int main()
{
    configurar_console();

    int matriz[LINHAS][COLUNAS];
    int soma_diagonal = 0;

    // s�o todas triangulares inferiores at� que se prove o contr�rio
    bool triangular_inferior = true;

    // zerar matriz (como � alocada na stack, pode conter res�duos da iniciali-
    // za��o do programa)
    memset(&matriz, 0, sizeof matriz);

    // desenhar matriz estilo Excel (A1, B2, ...)
    printf("    |     A |    B |    C |    D |    E \n");
    printf("----+-------+------+------+------+------\n\n");


    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            // como o scanf() ali em baixo faz uma quebra de linha, primeiro
            // vamos voltar a linha de cima, e, atrav�s do caractere '\r',
            // voltaremos ao come�o da linha.
            console_linha_cima();
            printf("\r%3i | ", linha + 1);


            // reescrever todas as colunas digitadas at� agora nessa linha
            for (int z = 0; z < coluna; z++) {
                printf(" %4i |", matriz[linha][z]);
            }

            scanf("%i", &matriz[linha][coluna]);

            // verificar se estamos acima da diagonal superior
            if (linha < coluna) {
                // verificar se o elemento atual n�o � 0
                if (matriz[linha][coluna] != 0) {
                    triangular_inferior = false;
                }
            }
        }

        console_linha_cima();
        printf("\r%3i | ", linha + 1);

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", matriz[linha][z]);

            // n�o adicionar um separador se essa for a �ltima coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }

    if (triangular_inferior) {
        printf("� uma matriz triangular inferior.\n");
    } else {
        printf("N�o � uma matriz triangular inferior.\n");
    }

    return 0;
}
