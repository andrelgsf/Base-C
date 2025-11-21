//Cadastro de aluno

#include <stdio.h>

//crio uma struct com os dados que o aluno possui, sendo eles nome, matricula e sua respectiva nota. E em seguida nomeio a estrutura com "Aluno"

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

// em seguida, dentro da classe main, um vetor de 3 espaços de armazenamento, a variavel de contagem , de maior nota e de soma das notas

int main() {
    Aluno alunos[3];
    Aluno melhorAluno;
    int i;
    float somaNotas = 0;

//entrada de dados
//até esse ciclo se repetir 3 vezes por serem 3 alunos, o programa irá imprimir pra escrever e ler os dados desses 3 alunos, usando da variavel i para passar a contagem, e usando do vetor da struct alunos para assimilar a qual aluno aquele dado corresponde.

  for (i = 0; i < 3; i++) {

 printf("Digite o nome do aluno %d\n", i + 1);
 scanf("%s",alunos[i].nome);

  printf("Digite a matricula do aluno %d\n", i + 1);
 scanf("%d", &alunos[i].matricula);

  printf("Digite a nota do aluno %d\n", i + 1);
 scanf("%f", &alunos[i].nota); // <-- adicionado ponto e vírgula aqui

//a cada ciclo acontece o seguinte: na primeira iteração, i == 0, pois é o aluno de índice 0 que está inserindo os dados, portanto seu índice 0 é assimilado na struct de melhorAluno, na segunda iteração por diante, a segunda parte da condicional que é avaliada, pós o "ou" lógico, pois o índice de aluno agora é 1,2, etc, e ele compara se nota desse aluno do índice atual é maior que a nota do aluno que até então recebeu a assimilação de melhorAluno, caso seja verdadeiro, agora o mesmo é o novo assimilado.

 somaNotas += alunos[i].nota;

 if (i == 0 || alunos[i].nota > melhorAluno.nota) {
    melhorAluno = alunos[i];
 }

 printf("\n");
  }

// as linhas abaixo devem ficar fora do for, para evitar repetir o cálculo da média e a impressão a cada aluno

float media = somaNotas / 3;

printf("\nMédia das notas: %.2f\n", media);
printf("\nAluno com maior nota: %s : %.2f\n", melhorAluno.nome, melhorAluno.nota); // <-- adicionado ponto e vírgula e formatado

    return 0;
}
