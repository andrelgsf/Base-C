#include <stdio.h>

int main() {
    int x = 10;
    float y = 5.5;
    char z = 'A';

    printf("Endereco de x: %p\n", &x);
    printf("Endereco de y: %p\n", &y);
    printf("Endereco de z: %p\n", &z);

    return 0;
}
