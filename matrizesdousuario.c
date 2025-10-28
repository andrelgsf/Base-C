#include <stdio.h>

// Pedir ao usuário para digitar os 4 valores de uma matriz 2x2. Mostrar a matriz na tela.

int main() {
    int mat[2][2]; // declaração da matriz 2x2
    int i, j;
    int valor_1;
    int valor_2;
    int valor_3;
    int valor_4;

    printf("Digite o primeiro valor da matriz: \n");
    scanf("%d", &valor_1);

    printf("Digite o segundo valor da matriz: \n");
    scanf("%d", &valor_2);

    printf("Digite o terceiro valor da matriz: \n");
    scanf("%d", &valor_3);

    printf("Digite o quarto valor da matriz: \n");
    scanf("%d", &valor_4);

    mat[0][0] = valor_1;
    mat[0][1] = valor_2;
    mat[1][0] = valor_3;
    mat[1][1] = valor_4;

    printf("\nMatriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
