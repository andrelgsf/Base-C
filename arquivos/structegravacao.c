#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];     // nome do funcionário
    float salario;     // salário base
    int horasExtras;   // horas extras realizadas
} Funcionario;

int main() {
    FILE *arquivo;                 // ponteiro para o arquivo
    Funcionario funcionarios[5];   // vetor com até 5 funcionários
    int qtd, i;

    printf("Quantos funcionarios deseja cadastrar? (maximo 5): ");
    scanf("%d", &qtd);

    if (qtd < 1 || qtd > 5) {
        printf("Quantidade invalida!\n");
        return 1; //laço para validação de quantidade de cadastros
    }

    // entrada dos dados
    for (i = 0; i < qtd; i++) {
        printf("\n Cadastro do funcionario %d \n", i + 1);

        printf("Nome: ");
        fflush(stdin);
        fgets(funcionarios[i].nome, 50, stdin);

        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);

        printf("Horas extras: ");
        scanf("%d", &funcionarios[i].horasExtras);

        fflush(stdin);
    }

    // abre arquivo para escrita (sobrescreve)
    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // grava os dados no arquivo
    for (i = 0; i < qtd; i++) {
        fprintf(arquivo, "%s %.2f %d\n",
                funcionarios[i].nome,
                funcionarios[i].salario,
                funcionarios[i].horasExtras);
    }

    fclose(arquivo);
    printf("\nDados gravados com sucesso em funcionarios.txt!\n");

    return 0;
}
