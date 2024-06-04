#include <stdio.h>

// Definição da estrutura Habitante
struct Habitante {
    int idade;
    char sexo;
    float salario;
    int numFilhos;
};

// Função para ler os dados dos habitantes
void lerDados(struct Habitante habitantes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a idade do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].idade);

        printf("Digite o sexo do habitante %d (M/F): ", i + 1);
        scanf(" %c", &habitantes[i].sexo);

        printf("Digite o salário do habitante %d: ", i + 1);
        scanf("%f", &habitantes[i].salario);

        printf("Digite o número de filhos do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].numFilhos);
    }
}

// Função para calcular a média do salário dos habitantes
float calcularMediaSalario(struct Habitante habitantes[], int tamanho) {
    float totalSalario = 0.0;
    for (int i = 0; i < tamanho; i++) {
        totalSalario += habitantes[i].salario;
    }
    return totalSalario / tamanho;
}

int main() {
    const int NUM_HABITANTES = 500;
    struct Habitante habitantes[NUM_HABITANTES];

    // Ler os dados dos habitantes
    lerDados(habitantes, NUM_HABITANTES);

    // Calcular e exibir a média do salário dos habitantes
    float mediaSalario = calcularMediaSalario(habitantes, NUM_HABITANTES);
    printf("A média do salário dos habitantes é: %.2f\n", mediaSalario);

    return 0;
}