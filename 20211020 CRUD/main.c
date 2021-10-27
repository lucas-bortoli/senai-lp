#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>
#include <sys/stat.h>

#define ARRLEN(x) (sizeof x / sizeof *x)
#define MAX_PRODUTOS 8

struct Produto {
    char nome[16];
    int estoque;
    double preco;
};

void ler_string(char* destino) {
    fflush(stdin);
    scanf ("%[^\n]%*c", destino);
}

void caixa_alta(char* string) {
    // iterar sobre cada caratere e deix�-lo uppercase
    for (int i = 0; i < strlen(string); i++) {
        string[i] = toupper(string[i]);
    }
}

// roubei daqui https://stackoverflow.com/a/230070
bool arquivo_existe(char *arquivo) {
  struct stat buf;
  return (stat(arquivo, &buf) == 0);
}

int main(void) {
    // Permitir o uso de acentua??o
    setlocale(LC_ALL, "Portuguese");
    // Usar pontos como separadores decimais
    setlocale(LC_NUMERIC, "English");

    struct Produto produtos[MAX_PRODUTOS];
    int numero_produtos = 0;

    // Inicializar vetor de produtos
    memset(&produtos, 0, sizeof produtos);

    // Abrir arquivo aberto
    char caminho[] = "dados.dat";
    FILE *p;

    if (arquivo_existe(caminho)) {
        // ler arquivo
        p = fopen(caminho, "r+");

        // ler todos os bytes do arquivo para a struct produtos
        int bytes_lidos = fread(produtos, 1, sizeof produtos, p);
        fread(&numero_produtos, 1, sizeof (int), p);

        printf("%i\n", numero_produtos);
        printf("%i bytes lidos\n", bytes_lidos);
    } else {
        // criar arquivo
        p = fopen(caminho, "w+");
    }

    do {
        char escolha_menu;

        // Mostrar lista de produtos
        printf("N. | Nome             | Pre�o       | Estoque\n");
        printf("===|==================|=============|========\n");
        for (int i = 0; i < min(numero_produtos, ARRLEN(produtos)); i++) {
            printf("#%i | %*s | R$ %*.2f | %i\n", i + 1, 16, produtos[i].nome, 8, produtos[i].preco, produtos[i].estoque);
        }

        printf("\n");
        printf("1> Adicionar produtos\n");
        printf("2> Editar produtos\n");
        printf("3> Apagar produtos\n");
        printf("   ---------------\n");
        printf("8> Salvar e sair\n");
        printf("9> Sair sem salvar\n");

        do {
            printf("\r>>> ");
            escolha_menu = fgetchar();
        } while (escolha_menu != '1' && escolha_menu != '2' && escolha_menu != '3' && escolha_menu != '8' && escolha_menu != '9');

        // Adicionar produtos
        if (escolha_menu == '1') {
            if (numero_produtos == MAX_PRODUTOS) {
                printf("    N�mero m�ximo de produtos atingido!\n");
                Sleep(1000);
                continue;
            }

            struct Produto produto;

            memset(&produto, 0, sizeof produto);

            printf("    [add] nome do produto: ");

            ler_string(&produto.nome);

            // transformar em caixa alta
            caixa_alta(&produto.nome);

            printf("    [add] pre�o do produto: R$ ");
            scanf("%lf", &produto.preco);
            printf("    [add] quantidade em estoque: ");
            scanf("%i", &produto.estoque);

            numero_produtos++;
            memcpy(&produtos[numero_produtos - 1], &produto, sizeof produto);

        // Atualizarlucas.santos00737481@sesisenaipr.org.br
        } else if (escolha_menu == '2') {
            if (numero_produtos == 0) {
                printf("    Primeiro adicione algum produto!\n");
                Sleep(1000);
                continue;
            }

            int indice = -1;

            do {
                printf("    [alterar] # do produto: ");
                scanf("%i", &indice);
            } while (indice <= 0 || indice > numero_produtos);

            // converter para �ndice de vetor (0 � primeiro, 1 � o segundo...)
            indice = indice - 1;

            char escolha_submenu;

            printf("\n");
            printf("    1> Alterar nome\n");
            printf("    2> Alterar pre�o\n");
            printf("    3> Alterar estoque\n");
            printf("    4> Voltar\n");

            do {
                printf("\r>>> ");
                escolha_submenu = fgetchar();
            } while (escolha_submenu != '1' && escolha_submenu != '2' && escolha_submenu != '3' && escolha_submenu != '4');

            // Alterar as propriedades de cada produto
            if (escolha_submenu == '1') {
                printf("    [alterar] novo nome do produto: ");
                ler_string(&produtos[indice].nome);
                // transformar em caixa alta
                caixa_alta(&produtos[indice].nome);
            } else if (escolha_submenu == '2') {
                printf("    [alterar] novo pre�o do produto: R$ ");
                scanf("%lf", &produtos[indice].preco);
            } else if (escolha_submenu == '3') {
                printf("    [alterar] novo estoque do produto: ");
                scanf("%i", &produtos[indice].estoque);
            }

        // Apagar
        } else if (escolha_menu == '3') {
            if (numero_produtos == 0) {
                printf("    Primeirolucas.santos00737481@sesisenaipr.org.br adicione algum produto!\n");
                Sleep(1000);
                continue;
            }

            int indice = 0;

            do {
                printf("    [delete] # do produto: ");
                scanf("%i", &indice);
            } while (indice <= 0 || indice > numero_produtos);

            // converter para �ndice de vetor (0 � primlucas.santos00737481@sesisenaipr.org.breiro, 1 � o segundo...)
            indice = indice - 1;

            // clonar a lista de produtos
            struct Produto produtos_clone[ARRLEN(produtos)];
            memset(&produtos_clone, 0, sizeof produtos_clone);

            // copiar mem�ria at� o �ndice anterior
            memcpy(&produtos_clone, &produtos, (indice) * sizeof (struct Produto));
            // copiar o resto da mem�ria, a partir desse �ndice
            memcpy(&produtos_clone[indice], &produtos[indice + 1], (ARRLEN(produtos) - indice - 1) * sizeof (struct Produto));

            // copiar o clone de volta para o vetor de produtos
            memcpy(&produtos, &produtos_clone, sizeof produtos);

            numero_produtos--;
        } else if (escolha_menu == '8') {
            // Salvar e sair
            fseek(p, 0, SEEK_SET);
            fwrite(produtos, 1, sizeof produtos, p);
            fwrite(&numero_produtos, sizeof (int), 1, p);
            fflush(p);

            break;
        } else if (escolha_menu == '9') {
            // Sair sem salvar

            break;
        }

        fflush(stdout);
        fflush(stdin);

        system("cls");
    } while (true);

    system("cls");
    printf("Fechando...\n");
    Sleep(2 * 1000); // suspender por 2 segundos

    fclose(p);

    return 0;
}
