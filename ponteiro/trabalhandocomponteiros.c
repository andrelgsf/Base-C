#include <stdio.h>

int main() {
    int numero = 20;
    int *ptr;

    ptr = &numero; // ponteiro recebe o endereço da variável

    printf("Valor da variavel numero: %d\n", numero);
    printf("Endereco da variavel numero: %p\n", &numero);
    printf("Valor armazenado no ponteiro (endereco): %p\n", ptr);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);

    return 0;
}
