#include <stdio.h>

// Definição da estrutura DadosAluno
struct DadosAluno {
    float media;
    int idade;
};

int main() {
    struct DadosAluno aluno; // Declaração de uma variável do tipo DadosAluno

    // Leitura dos dados do aluno
    printf("Digite a média do aluno: ");
    scanf("%f", &aluno.media);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    // Exibição dos dados do aluno
    printf("Média do aluno: %.2f\n", aluno.media);
    printf("Idade do aluno: %d\n", aluno.idade);

    return 0;
}