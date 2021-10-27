#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define LINHAS 6
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

    int matriz[LINHAS][COLUNAS];

    int maior_numero_linha = 0;
    int maior_numero_coluna = 0;
    int menor_numero_linha = 0;
    int menor_numero_coluna = 0;


    // zerar matriz (como é alocada na stack, pode conter resíduos da iniciali-
    // zação do programa)
    memset(&matriz, 0, sizeof matriz);

    // desenhar matriz estilo Excel (A1, B2, ...)
    printf("     |     A |    B |    C \n");
    printf("-----+-------+------+------\n\n");


    for (int linha = 0; linha < LINHAS; linha++) {
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            // como o scanf() ali em baixo faz uma quebra de linha, primeiro
            // vamos voltar a linha de cima, e, através do caractere '\r',
            // voltaremos ao começo da linha.
            console_linha_cima();
            printf("\r#%2i  | ", linha + 1);


            // Reescrever todas as colunas digitadas até agora nessa linha
            for (int z = 0; z < coluna; z++) {
                printf(" %4i |", matriz[linha][z]);
            }

            scanf("%i", &matriz[linha][coluna]);

            int digitado = matriz[linha][coluna];

            if (digitado > matriz[maior_numero_linha][maior_numero_coluna]) {
                maior_numero_linha = linha;
                maior_numero_coluna = coluna;
            } else if (digitado < matriz[menor_numero_linha][menor_numero_coluna]) {
                menor_numero_linha = linha;
                menor_numero_coluna = coluna;
            }
        }

        console_linha_cima();
        printf("\r#%2i  | ", linha + 1);

        // Desenhar essa linha por completo
        for (int z = 0; z < COLUNAS; z++) {
            printf(" %4i ", matriz[linha][z]);

            // não adicionar um separador se essa for a última coluna
            if (z < COLUNAS - 1) printf("|");
        }

        printf("\n\n");
    }

    console_linha_cima();
    printf("\r---------------------------\n");
    printf("Menor número: %c%i, valor %i\n", numero_para_letra(menor_numero_coluna + 1), menor_numero_linha + 1, matriz[menor_numero_linha][menor_numero_coluna]);
    printf("Maior número: %c%i, valor %i\n", numero_para_letra(maior_numero_coluna + 1), maior_numero_linha + 1, matriz[maior_numero_linha][maior_numero_coluna]);
    printf("\n\n\n\n");

    return 0;
}
