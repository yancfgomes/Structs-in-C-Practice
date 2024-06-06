// 7) Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos:
//  Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. 
// Considere uma turma de até 10 alunos. Após ler todos os dados digitados,
// e depois de armazená-los em um vetor de estrutura, 
// exibir na tela a listagem final dos alunos com as suas respectivas 
// medias finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).

#include <stdio.h>

// Definição da estrutura Aluno
struct Aluno {
    int matricula;
    char nome[100];
    int codigoDisciplina;
    float nota1;
    float nota2;
};

// Função para calcular a média ponderada das notas
float calcularMediaPonderada(float nota1, float nota2) {
    return (nota1 * 1.0 + nota2 * 2.0) / 3.0;
}

int main() {
    const int MAX_ALUNOS = 10;
    struct Aluno alunos[MAX_ALUNOS];
    int numAlunos;

    // Leitura do número de alunos
    do {
        printf("Digite o numero de alunos (maximo %d): ", MAX_ALUNOS);
        scanf("%d", &numAlunos);
    } while (numAlunos < 1 || numAlunos > MAX_ALUNOS);

    // Leitura dos dados dos alunos
    for (int i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        getchar(); // Para consumir o newline do scanf anterior
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Codigo da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Nota1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota2: ");
        scanf("%f", &alunos[i].nota2);
    }

    // Exibição da listagem final dos alunos com médias finais
    printf("\nListagem Final dos Alunos com Médias Finais:\n");
    for (int i = 0; i < numAlunos; i++) {
        float mediaFinal = calcularMediaPonderada(alunos[i].nota1, alunos[i].nota2);
        printf("Matricula: %d, Nome: %sCodigo da Disciplina: %d, Media Final: %.2f\n",
               alunos[i].matricula, alunos[i].nome, alunos[i].codigoDisciplina, mediaFinal);
    }

    return 0;
}