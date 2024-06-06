// 5) Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
// • Horario: composto de hora, minutos e segundos.
// • Data: composto de dia, mes e ano.
// • Compromisso: composto de uma data, horario e texto que descreve o compromisso.


#include <stdio.h>

// Definição da estrutura Horario
struct Horario {
    int hora;
    int minutos;
    int segundos;
};

// Definição da estrutura Data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Definição da estrutura Compromisso
struct Compromisso {
    struct Data data;
    struct Horario horario;
    char descricao[100];
};

int main() {
    // Exemplo de uso das estruturas definidas
    struct Compromisso compromisso;

    // Definindo um compromisso de exemplo
    compromisso.data.dia = 12;
    compromisso.data.mes = 6;
    compromisso.data.ano = 2024;

    compromisso.horario.hora = 14;
    compromisso.horario.minutos = 30;
    compromisso.horario.segundos = 0;

    snprintf(compromisso.descricao, sizeof(compromisso.descricao), "Reunião de trabalho");

    // Exibindo os dados do compromisso
    printf("Compromisso: %s\n", compromisso.descricao);
    printf("Data: %02d/%02d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    return 0;
}