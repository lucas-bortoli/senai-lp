#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define LINHAS 5
#define COLUNAS 2

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

// converte número para letra
// ex:
//    1 -> "A", 2 -> "B", 3 -> "C"
// só funciona no intervalo [1, 26]
char numero_para_letra(int num) {
    return num + 64;
}

int main()
{
    configurar_console();

    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int matriz_soma[LINHAS][COLUNAS];

    // zerar matriz (como é alocada na stack, pode conter resíduos da iniciali-
    // zação do programa)
    memset(&matriz1, 0, sizeof matriz1);
    memset(&matriz2, 0, sizeof matriz2);
    memset(&matriz_soma, 0, sizeof matriz_soma);

    // desenhar matriz estilo Excel (A1, B2, ...)
    printf("mat 1 |     A |    B \n");
    printf("------+-------+------\n\n");


    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            // como o scanf() ali em baixo faz uma quebra de linha, primeiro
            // vamos voltar a linha de cima, e, através do caractere '\r',
            // voltaremos ao começo da linha.
            console_linha_cima();
            printf("\r#%3i  | ", linha + 1);


            // Reescrever todas as colunas digitadas até agora nessa linha
            for (int z = 0; z < coluna; z++) {
                printf(" %4i |", matriz1[linha][z]);
            }

            scanf("%i", &matriz1[linha][coluna]);

            matriz_soma[linha][coluna] = matriz1[linha][coluna];
        }

        console_linha_cima();
        printf("\r#%3i  | ", linha + 1);

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", matriz1[linha][z]);

            // não adicionar um separador se essa for a última coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }

    console_linha_cima();
    printf("\r ");
    printf("\n\n");




    // SEGUNDA MATRIZ




    // desenhar matriz estilo Excel (A1, B2, ...)
    printf("mat 2 |     A |    B \n");
    printf("------+-------+------\n\n");


    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            // como o scanf() ali em baixo faz uma quebra de linha, primeiro
            // vamos voltar a linha de cima, e, através do caractere '\r',
            // voltaremos ao começo da linha.
            console_linha_cima();
            printf("\r#%3i  | ", linha + 1);


            // Reescrever todas as colunas digitadas até agora nessa linha
            for (int z = 0; z < coluna; z++) {
                printf(" %4i |", matriz2[linha][z]);
            }

            scanf("%i", &matriz2[linha][coluna]);

            matriz_soma[linha][coluna] += matriz2[linha][coluna];
        }

        console_linha_cima();
        printf("\r#%3i  | ", linha + 1);

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", matriz2[linha][z]);

            // não adicionar um separador se essa for a última coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }

    console_linha_cima();
    printf("\r ");
    printf("\n\n");




    // MATRIZ SOMA



    // desenhar matriz estilo Excel (A1, B2, ...)
    printf("soma  |     A |    B \n");
    printf("------+-------+------\n\n");


    for (int linha = 0; linha < LINHAS; linha++) {
        console_linha_cima();
        printf("\r#%3i  | ", linha + 1);

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", matriz_soma[linha][z]);

            // não adicionar um separador se essa for a última coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }

    return 0;
}
