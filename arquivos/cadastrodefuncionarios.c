#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para remover o '\n' do fgets

typedef struct { // cria a estrutura com os dados referentes ao que se deve inserir
// ao cadastrar um novo funcionário
    char nome[50];
    int matricula;
    float horasExtras;
    float valorHora;
} Funcionario;

int main() {
    FILE *arquivo; //declara variável chamada arquivo do tipo FILE (ponteiro)
    Funcionario funcionarios[5]; //declara vetor de 5 funcionários
    int i, qtd; //contador e quantidade que o usuário digita

    printf("Quantos funcionarios deseja cadastrar? (maximo 5): ");
    scanf("%d", &qtd);

    // limpa o '\n' deixado pelo scanf antes de usar fgets
    while (getchar() != '\n'); // evita problemas ao ler o nome

    if (qtd < 1 || qtd > 5) {
        printf("Quantidade invalida!\n");
        return 1; //indica erro
    }

    // Entrada de dados
    for (i = 0; i < qtd; i++) { //passa a lista do contador
        printf("\n Cadastrar o funcionario %d \n", i + 1);

        printf("Nome: ");
        fgets(funcionarios[i].nome, 50, stdin); // lê o nome

        // remove o '\n' que o fgets armazena
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &funcionarios[i].matricula);

        printf("Horas extras: ");
        scanf("%f", &funcionarios[i].horasExtras);

        printf("Valor da hora: ");
        scanf("%f", &funcionarios[i].valorHora);

        // limpa o '\n' deixado pelo scanf para a próxima leitura com fgets
        while (getchar() != '\n');
    }

    // Gravação no arquivo
    arquivo = fopen("funcionarios.txt", "w"); // cria o arquivo funcionarios.txt em modo escrita(w)
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        fprintf(arquivo, "%s %d %.2f %.2f\n",
                funcionarios[i].nome,
                funcionarios[i].matricula,
                funcionarios[i].horasExtras,
                funcionarios[i].valorHora); //escreve no arquivo todos os funcionários cadastrados
    }

    fclose(arquivo); //fecha o arquivo, garantindo que buffers sejam esvaziados para o disco e liberando recursos

    printf("\nDados gravados com sucesso em funcionarios.txt!\n");

    return 0;
}
