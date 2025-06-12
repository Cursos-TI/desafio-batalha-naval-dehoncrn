# include <stdio.h>

int main() {
    
    // Criação do Tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com zeros

    // Navio vertical: [linha1, coluna1, linha2, coluna2, ...]
    int navio_vertical[6] = {1, 2, 2, 2, 3, 2}; // O valor da coluna é constante (2) e as linhas variam

    // Navio horizontal: [linha1, coluna1, linha2, coluna2, ...]
    int navio_horizontal[8] = {5, 0, 5, 1, 5, 2, 5, 3}; // O valor da linha é constante (5) e as colunas variam

     // Posiciona o navio vertical (valor 3)
    for (int i = 0; i < 6; i += 2) {
        int linha = navio_vertical[i]; // Observe que serão lidas as posições 0, 2 e 4 do vetor
        int coluna = navio_vertical[i + 1]; // Observe que serão lidas as posições 1, 3 e 5 do vetor
        tabuleiro[linha][coluna] = 3;
    }

    // Posiciona o navio horizontal (valor 4)
    for (int i = 0; i < 8; i += 2) {
        int linha = navio_horizontal[i]; // Observe que serão lidas as posições 0, 2, 4 e 6 do vetor
        int coluna = navio_horizontal[i + 1]; // Observe que serão lidas as posições 1, 3, 5 e 7 do vetor
        tabuleiro[linha][coluna] = 3;
    }


    
    // Exibe a matriz do tabuleiro
    printf("Tabuleiro Atualizado:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}