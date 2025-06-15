# include <stdio.h> // Para usar a função printf()
# include <stdlib.h> // Para usar a função abs()

int main() {
    
    // Criação do Tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com zeros

    // Navio vertical de 3 posições
    int navioVertical[6] = {1, 8, 2, 8, 3, 8}; // O valor da coluna é constante e as linhas variam

    // Navio horizontal de 4 posições
    int navioHorizontal[8] = {4, 5, 4, 6, 4, 7, 4, 8}; // O valor da linha é constante e as colunas variam

    // Navios diagonais de 3 posições
    int NavioDiagonal1[6] = {7, 3, 8, 4, 9, 5};

    int NavioDiagonal2[6] = {3, 4, 2, 5, 1, 6};

     // Posiciona o navio vertical (valor 3)
    for (int i = 0; i < 6; i += 2) {
        int linha = navioVertical[i]; // Observe que serão lidas as posições 0, 2 e 4 do vetor
        int coluna = navioVertical[i + 1]; // Observe que serão lidas as posições 1, 3 e 5 do vetor
        tabuleiro[linha][coluna] = 3;
    }

    // Posiciona o navio horizontal (valor 4)
    for (int i = 0; i < 8; i += 2) {
        int linha = navioHorizontal[i]; // Observe que serão lidas as posições 0, 2, 4 e 6 do vetor
        int coluna = navioHorizontal[i + 1]; // Observe que serão lidas as posições 1, 3, 5 e 7 do vetor
        tabuleiro[linha][coluna] = 3;
    }

    // Posiciona o navio diagonal 1 (valor 3)
    for (int i = 0; i < 6; i += 2) {
        int linha = NavioDiagonal1[i]; // Observe que serão lidas as posições 0, 2 e 4 do vetor
        int coluna = NavioDiagonal1[i + 1]; // Observe que serão lidas as posições 1, 3 e 5 do vetor
        tabuleiro[linha][coluna] = 3;
    }

    // Posiciona o navio diagonal 2 (valor 3)
    for (int i = 0; i < 6; i += 2) {
        int linha = NavioDiagonal2[i]; // Observe que serão lidas as posições 0, 2 e 4 do vetor
        int coluna = NavioDiagonal2[i + 1]; // Observe que serão lidas as posições 1, 3 e 5 do vetor
        tabuleiro[linha][coluna] = 3;
    }

    // Preenche uma matriz cônica 5x5 com a base na parte superior
    int linBase = 0; // linha da base do cone
    int colBase = 1; // coluna inicial para centralizar a base
    for (int i = 0; i < 5; i++) {
        int colFim = colBase + i;
        int colIni = colBase + 4 - i;
        for (int j = colFim; j <= colIni; j++) {
            tabuleiro[linBase + i][j] = 5;
        }
    }

    // Preenche uma matriz 5x5 em cruz com a origem em seu centro
    int linCentral = 7;
    int colCentral = 7;
    for (int i = -2; i <= 2; i++) {
        tabuleiro[linCentral][colCentral + i] = 5;
        tabuleiro[linCentral + i][colCentral] = 5;
    }

    // Preenche uma matriz 5x5 em formato octaédrico
    int linCentro = 5;
    int colCentro = 2;
    for (int i = -2; i <= 2; i++) {
        int alcance = 2 - abs(i);
        for (int j = -alcance; j <= alcance; j++) {
            tabuleiro[linCentro + i][colCentro + j] = 5;
        }
    }

    //Instruções para o usuário
    printf("\n***Indicação de leitura do tabuleiro***\n\n");
    printf("Os valores 0 representam água\n");
    printf("Os valores 3 representam os navios\n");
    printf("Os valores 5 representam as matrizes de habilidades\n");
    printf("As matrizes de habilidades são:\n");
    printf("   Matriz Cônica 5x5\n");
    printf("   Matriz Cruz 5x5\n");
    printf("   Matriz Octaédrica 5x5\n");

    // Exibe a matriz octaédrica 5x5
    printf("\nTabuleiro com as matrizes de habilidade e os navios:\n");
    printf("\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}