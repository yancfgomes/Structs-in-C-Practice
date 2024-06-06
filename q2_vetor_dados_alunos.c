// 2) Considerando o exercício 1, 
// criar uma variável que é um vetor da estrutura DadosAluno. 
// O programa deve obter a média e a idade de 10 alunos. 
// Depois, estes dados devem ser exibidos.

#include <stdio.h>

// Definição da estrutura DadosAluno
struct DadosAluno {
    float media;
    int idade;
};

int main() {
    // Declaração de um vetor de estruturas DadosAluno para 10 alunos
    struct DadosAluno alunos[10];

    // Loop para obter os dados dos 10 alunos
    for (int i = 0; i < 10; i++) {
        printf("Digite a média do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
    }

    // Exibição dos dados dos 10 alunos
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d - Média: %.2f, Idade: %d\n", i + 1, alunos[i].media, alunos[i].idade);
    }

    return 0;
}