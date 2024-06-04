#include <stdio.h>

// Definição da estrutura Livro
struct Livro {
    char titulo[100];
    int anoEdicao;
    int numPaginas;
    float preco;
};

int main() {
    struct Livro livros[5];  // Vetor de 5 elementos do tipo Livro
    int totalPaginas = 0;
    float mediaPaginas;

    // Loop para obter os dados dos 5 livros
    for (int i = 0; i < 5; i++) {
        printf("Digite o título do livro %d: ", i + 1);
        // Utilizando fgets para ler a string com espaços
        getchar(); // Consome o caractere de nova linha deixado por scanf anterior
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);

        printf("Digite o ano de edição do livro %d: ", i + 1);
        scanf("%d", &livros[i].anoEdicao);

        printf("Digite o número de páginas do livro %d: ", i + 1);
        scanf("%d", &livros[i].numPaginas);

        printf("Digite o preço do livro %d: ", i + 1);
        scanf("%f", &livros[i].preco);

        // Acumular o total de páginas
        totalPaginas += livros[i].numPaginas;
    }

    // Calcular a média do número de páginas
    mediaPaginas = (float)totalPaginas / 5;

    // Exibir a média do número de páginas
    printf("\nA média do número de páginas dos livros é: %.2f\n", mediaPaginas);

    return 0;
}