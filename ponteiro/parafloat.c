#include <stdio.h>

int main() {
    float nota = 8.75;
    float *pNota;

    pNota = &nota;

    printf("Valor de nota: %.2f\n", nota);
    printf("Endereco de nota: %p\n", &nota);
    printf("Conteudo apontado pelo ponteiro: %.2f\n", *pNota);

    return 0;
}
