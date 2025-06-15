# include <stdio.h>

int main() {
    
    // Criação do Tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com zeros

    // Preenche uma matriz cônica 5x5 com a base na parte superior
    int linBase = 0; // linha da base do cone
    int colBase = 1; // coluna inicial para centralizar a base
    for (int i = 0; i < 5; i++) {
        int colFim = colBase + i;
        int colIni = colBase + 4 - i;
        for (int j = colFim; j <= colIni; j++) {
            tabuleiro[linBase + i][j] = 1;
        }
    }

    // Exibe a matriz cônica
    printf("Matriz Cônica 5x5:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Preenche uma matriz 5x5 em cruz com a origem em seu centro
    int linCentral = 7;
    int colCentral = 7;
    for (int i = -2; i <= 2; i++) {
        tabuleiro[linCentral][colCentral + i] = 2;
        tabuleiro[linCentral + i][colCentral] = 2;
    }

    // Exibe a matriz em cruz 5x5
    printf("\nMatriz Cruz 5x5:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    /*
    // Exibe a matriz do tabuleiro
    printf("Tabuleiro Atualizado:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    */ 
    
    return 0;
}