#include <stdio.h>

int main() {
    int idade = 18;
    double salario = 2500.75;
    char inicial = 'J';
    float altura = 1.78;

    printf("Valores:\n");
    printf("Idade: %d\n", idade);
    printf("Salario: %lf\n", salario);
    printf("Inicial: %c\n", inicial);
    printf("Altura: %.2f\n\n", altura);

    printf("Enderecos de memoria:\n");
    printf("Endereco de idade: %p\n", &idade);
    printf("Endereco de salario: %p\n", &salario);
    printf("Endereco de inicial: %p\n", &inicial);
    printf("Endereco de altura: %p\n", &altura);

    return 0;
}
