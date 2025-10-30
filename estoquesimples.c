#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno alunos[3];
    Aluno melhorAluno;
    int i;
    float somaNotas = 0;

    for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d\n", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a matricula do aluno %d\n", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite a nota do aluno %d\n", i + 1);
        scanf("%f", &alunos[i].nota);

        somaNotas += alunos[i].nota;

        if (i == 0 || alunos[i].nota > melhorAluno.nota) {
            melhorAluno = alunos[i];
        }

        printf("\n");
    }

    float media = somaNotas / 3;

    printf("\nMédia das notas: %.2f\n", media);
    printf("\nAluno com maior nota: %s : %.2f\n", melhorAluno.nome, melhorAluno.nota);

    return 0;
}
