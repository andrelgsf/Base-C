#include <stdio.h>

typedef struct {
    char modelo[50];
    int ano;
    float preco;
} Carro;

int main() {
    Carro c1, c2;

    printf("Digite o modelo do primeiro carro: ");
    scanf("%s", c1.modelo);

    printf("Digite o ano do %s: ", c1.modelo);
    scanf("%d", &c1.ano);

    printf("Digite o preço: ");
    scanf("%f", &c1.preco);

    printf("\nDigite o modelo do segundo carro: ");
    scanf("%s", c2.modelo);

    printf("Digite o ano do %s: ", c2.modelo);
    scanf("%d", &c2.ano);

    printf("Digite o preço: ");
    scanf("%f", &c2.preco);

    if (c1.preco > c2.preco) {
        printf("\nO carro mais caro é o %s do ano %d (R$ %.2f)\n", c1.modelo, c1.ano, c1.preco);
    } else if (c2.preco > c1.preco) {
        printf("\nO carro mais caro é o %s do ano %d (R$ %.2f)\n", c2.modelo, c2.ano, c2.preco);
    } else {
        printf("\nOs dois carros têm o mesmo preço (R$ %.2f)\n", c1.preco);
    }

    return 0;
}
