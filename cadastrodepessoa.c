//1 – Cadastro de pessoa

#include <stdio.h>

int main() {

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

Pessoa p1;

printf("Digite seu primeiro nome:\n ");
scanf("%s", p1.nome);

printf("Digite sua idade:\n ");
scanf("%d", &p1.idade);

printf("Digite sua altura:\n ");
scanf("%f", &p1.altura);

printf("Usuário 1: %s, %d anos, %.2f \n", p1.nome, p1.idade, p1.altura);

    return 0;
}