#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define LINHAS 3
#define COLUNAS 3

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

// converte n�mero para letra
// ex:
//    1 -> "A", 2 -> "B", 3 -> "C"
// s� funciona no intervalo [1, 26]
char numero_para_letra(int num) {
    return num + 64;
}

int main()
{
    configurar_console();

    int matriz[LINHAS][COLUNAS];
    int clone[LINHAS][COLUNAS];

    // zerar matriz (como � alocada na stack, pode conter res�duos da iniciali-
    // za��o do programa)
    memset(&matriz, 0, sizeof matriz);
    memset(&clone, 0, sizeof clone);

    // desenhar matriz estilo Excel (A1, B2, ...)
    printf("     |     A |    B |    C \n");
    printf("-----+-------+------+------\n\n");


    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            // como o scanf() ali em baixo faz uma quebra de linha, primeiro
            // vamos voltar a linha de cima, e, atrav�s do caractere '\r',
            // voltaremos ao come�o da linha.
            console_linha_cima();
            printf("\r#%2i  | ", linha + 1);


            // Reescrever todas as colunas digitadas at� agora nessa linha
            for (int z = 0; z < coluna; z++) {
                printf(" %4i |", matriz[linha][z]);
            }

            scanf("%i", &matriz[linha][coluna]);

            // inverter posi��o no clone
            clone[coluna][linha] = matriz[linha][coluna];
        }

        console_linha_cima();
        printf("\r#%2i  | ", linha + 1);

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", matriz[linha][z]);

            // n�o adicionar um separador se essa for a �ltima coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }

    console_linha_cima();
    printf("\r ");
    printf("\nInvertendo a matriz...\n\n");

	// Desenhar a matriz normalmente; j� invertemos ela na linha #69
    printf("     |    #1 |   #2 |   #3 \n");
    printf("-----+-------+------+------\n\n");
    for (int linha = 0; linha < LINHAS; linha++) {
        console_linha_cima();
        printf("\r %2c  | ", numero_para_letra(linha + 1));

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", clone[linha][z]);

            // n�o adicionar um separador se essa for a �ltima coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }


    return 0;
}
