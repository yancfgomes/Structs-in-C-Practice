// 4) Foi realizada uma pesquisa entre 500 habitantes de uma certa região. 
// De cada habitante foram coletados os dados: idade, sexo, salário e número de filhos. 
// Crie a estrutura de dados adequada para armazenar estas informações e 
// faça uma função que armazene as informações digitadas pelo usuário na estrutura de dados criada. 
// Faça também uma função que calcula a média do salário dos habitantes.


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
    #define NUM_HABITANTES 500
    struct Habitante habitantes[NUM_HABITANTES];

    // Ler os dados dos habitantes
    lerDados(habitantes, NUM_HABITANTES);

    // Calcular e exibir a média do salário dos habitantes
    float mediaSalario = calcularMediaSalario(habitantes, NUM_HABITANTES);
    printf("A média do salário dos habitantes é: %.2f\n", mediaSalario);

    return 0;
}