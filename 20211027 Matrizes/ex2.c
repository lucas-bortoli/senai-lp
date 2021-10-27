#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define LINHAS 3
#define COLUNAS 3

void configurar_console() {
    // Permitir acentos no console
    setlocale(LC_ALL, "Portuguese");

    // Usar "." como separador decimal -- preferência minha
    setlocale(LC_NUMERIC, "English");

    // permitir comandos VT-100 no console do Windows (cmd.exe) -- só funciona
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
    int soma_colunas[COLUNAS];

    // zerar matriz (como é alocada na stack, pode conter resíduos da iniciali-
    // zação do programa)
    memset(&matriz, 0, sizeof matriz);
    memset(&soma_colunas, 0, sizeof soma_colunas);

    // desenhar matriz estilo Excel (A1, B2, ...)
    printf("     |     A |    B |    C \n");
    printf("-----+-------+------+------\n\n");


    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            // como o scanf() ali em baixo faz uma quebra de linha, primeiro
            // vamos voltar a linha de cima, e, através do caractere '\r',
            // voltaremos ao começo da linha.
            console_linha_cima();
            printf("\r%3i  | ", linha + 1);


            // Reescrever todas as colunas digitadas até agora nessa linha
            for (int z = 0; z < coluna; z++) {
                printf(" %4i |", matriz[linha][z]);
            }

            scanf("%i", &matriz[linha][coluna]);
        }

        console_linha_cima();
        printf("\r%3i  | ", linha + 1);

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", matriz[linha][z]);

            // não adicionar um separador se essa for a última coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }

    // somar colunas
    console_linha_cima();
    printf("\r-----+-------+------+------\n");
    printf("Soma | ");
    for (int coluna = 0; coluna < COLUNAS; coluna++) {
        for (int linha = 0; linha < LINHAS; linha++) {
            soma_colunas[coluna] += matriz[linha][coluna];
        }

        printf(" %4i ", soma_colunas[coluna]);

        // não adicionar um separador se essa for a última coluna
        if (coluna < COLUNAS - 1) printf("|");
    }

    printf("\n\n\n\n");

    return 0;
}
