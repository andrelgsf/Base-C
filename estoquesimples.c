//cria um estrutura "produto" e calcula o valor total em estoque(preço x quantidade) de 3 produtos
//teste
#include <stdio.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    float estoque;
    Produto produto;

 printf("Digite o nome do produto \n");
 scanf("%s", produto.nome);
 
 
 printf("Digite a quantidade do produto \n");
 scanf("%d", &produto.quantidade);
 
 printf("Digite o preço do produto\n ");
 scanf("%f", &produto.preco);
 
 estoque = produto.preco * produto.quantidade;
 
 printf("O estoque do produto %s é de %.0f\n ", produto.nome, estoque);
  
    return 0;
}
