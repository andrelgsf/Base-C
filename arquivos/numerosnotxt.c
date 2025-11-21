#include <stdio.h>

int main() {
    FILE *arquivo;            // declara ponteiro para arquivo
    int numeros[5];           // vetor que vai guardar os 5 números
    int i;

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]); //laço para digitar os numeros
    }

    // abre o arquivo numeros.txt no modo escrita ("w")
    // se o arquivo não existir, o programa cria um
    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {   // verifica se houve erro ao abrir
        printf("Erro ao abrir o arquivo!\n");
        return 1;            // encerra com código de erro
    }

    // grava cada número no arquivo, um por linha
    for (i = 0; i < 5; i++) {
        fprintf(arquivo, "%d\n", numeros[i]);
    }

    fclose(arquivo);         // fecha o arquivo

    printf("Numeros gravados com sucesso em numeros.txt\n");

    return 0;
}
