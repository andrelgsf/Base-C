#include <stdio.h>

int main() {
    int mat[3][3]; // declaração da matriz 3x3
    int i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == 0)
                mat[i][j] = i;   // primeira linha = 0
            else
                mat[i][j] = j;   // demais linhas = índice da coluna
        }
    }

   
    printf("\nMatriz 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma += mat[i][j];
        }
    }

    printf("\nA soma é %d\n", soma);

    return 0;
}
