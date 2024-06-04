#include <stdio.h>

// Definição da estrutura Aluno
struct Aluno {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
};

// Função para calcular a média geral de um aluno
float calcularMedia(struct Aluno aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

int main() {
    const int NUM_ALUNOS = 5;
    struct Aluno alunos[NUM_ALUNOS];
    int indiceMaiorNota1 = 0;
    int indiceMaiorMedia = 0;
    int indiceMenorMedia = 0;

    // Entrada dos dados dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        getchar(); // Para consumir o newline do scanf anterior
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);
    }

    // Encontrar o aluno com maior nota na primeira prova
    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota1 > alunos[indiceMaiorNota1].nota1) {
            indiceMaiorNota1 = i;
        }
    }

    // Encontrar o aluno com maior e menor média geral
    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (calcularMedia(alunos[i]) > calcularMedia(alunos[indiceMaiorMedia])) {
            indiceMaiorMedia = i;
        }
        if (calcularMedia(alunos[i]) < calcularMedia(alunos[indiceMenorMedia])) {
            indiceMenorMedia = i;
        }
    }

    // Exibir os resultados
    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Matricula: %d, Nome: %s, Nota: %.2f\n", alunos[indiceMaiorNota1].matricula, alunos[indiceMaiorNota1].nome, alunos[indiceMaiorNota1].nota1);

    printf("\nAluno com maior média geral:\n");
    printf("Matricula: %d, Nome: %s, Media: %.2f\n", alunos[indiceMaiorMedia].matricula, alunos[indiceMaiorMedia].nome, calcularMedia(alunos[indiceMaiorMedia]));

    printf("\nAluno com menor média geral:\n");
    printf("Matricula: %d, Nome: %s, Media: %.2f\n", alunos[indiceMenorMedia].matricula, alunos[indiceMenorMedia].nome, calcularMedia(alunos[indiceMenorMedia]));

    // Verificar aprovação dos alunos
    printf("\nStatus dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        float media = calcularMedia(alunos[i]);
        printf("Matricula: %d, Nome: %s, Media: %.2f, Status: %s\n",
               alunos[i].matricula,
               alunos[i].nome,
               media,
               media >= 6 ? "Aprovado" : "Reprovado");
    }

    return 0;
}