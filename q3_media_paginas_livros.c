// 3) Fazer um programa que cria uma estrutura livro, 
// que contém os elementos título, ano de edição, número de páginas e preço. 
// Criar uma variável desta estrutura que é um vetor de 5 elementos. 
// Ler os valores para a estrutura e imprimir a média do número de páginas do livros.


#include <stdio.h>

// Definição da estrutura Livro
struct Livro {
    char titulo[100];
    int anoEdicao;
    int numPaginas;
    float preco;
};

int main() {
    #define TAM 5
    struct Livro livros[TAM];  // Vetor de 5 elementos do tipo Livro
    int totalPaginas = 0;
    float mediaPaginas;

    // Loop para obter os dados dos 5 livros
    for (int i = 0; i < TAM; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        getchar(); // Consome o caractere de nova linha deixado por scanf anterior
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);

        printf("Digite o ano de edição do livro %d: ", i + 1);
        scanf("%d", &livros[i].anoEdicao);
        getchar(); // Consome o caractere de nova linha deixado por scanf

        printf("Digite o número de páginas do livro %d: ", i + 1);
        scanf("%d", &livros[i].numPaginas);
        getchar(); // Consome o caractere de nova linha deixado por scanf

        printf("Digite o preço do livro %d: ", i + 1);
        scanf("%f", &livros[i].preco);
        getchar(); // Consome o caractere de nova linha deixado por scanf

        // Acumular o total de páginas
        totalPaginas += livros[i].numPaginas;
    }

    // Calcular a média do número de páginas
    mediaPaginas = totalPaginas / TAM;

    // Exibir a média do número de páginas
    printf("\nA média do número de páginas dos livros é: %.2f\n", mediaPaginas);

    return 0;
}
