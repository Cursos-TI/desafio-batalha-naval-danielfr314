#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main () {

    char coluna;
    int n1 = 0, navio1 [3] = {3, 3, 3};      // n1, n2, n3... -> Índice do vetor navio 
    int n2 = 0, navio2 [3] = {3, 3, 3};      // Os vários índices são para permitir a configuração
    int n3 = 0, navio3 [3] = {3, 3, 3};      // dos 4 navios sem que um índice atrapalhe o outro
    int n4 = 0, navio4 [3] = {3, 3, 3};    
                                          
    int tabuleiro [10][10];               

    printf("Tabuleiro Batalha Naval\n");     // 0 Representa água
    printf("    ");                          // 3 Representa o navio
    
    for (int i = 0, coluna = 'A'; i < COLUNAS; i++, coluna++) {      
        printf("%c ", coluna);        
    }

    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        if (i == 9) {  // Condição estabelecida para deixar o tabuleiro mais visivelmente agradável
            printf("%d  ", (i+1));
        } else {
            printf(" %d  ", (i+1));
        }       

        for (int j = 0; j < COLUNAS; j++) {
 
            if (i == (j + 4) && j > 0 && j < 4) {            // Condição para exibir o Navio 1
                if (i > 7 && j > 7) break;               
                printf("%d ", navio1 [n1]);
                n1++;
                continue;

            } else if ((i + j) == 12 && i > 2 && i < 6) {    // Condição para exibir o Navio 2 
                printf("%d ", navio2 [n2]);
                n2++;
                continue;

            } else if (i == 1 && j > 0 && j < 4) {           // Condição para exibir o Navio horizontal
                printf("%d ", navio3 [n3]);
                n3++; 
                continue;

            } else if (j == 6 && i >= 0 && i < 3) {          // Condição para exibir o Navio vertical
                printf("%d ", navio4 [n4]);   
                n4++;    
                continue;

            } else {
                printf("%d ", tabuleiro [i][j] = 0);          // Condição para exibir água
                continue;
            }

        }
        printf("\n");
    }
    
}