#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 50

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa; // Reestruturação de 'Struct tipo_pessoa' p/ somente 'tipo_pessoa' (variável)


int main(void) {
    //setlocale(LC_ALL, "Portuguese"); //Padrões brasileiros de escrita <locale.h>

    //Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Atribuindo valores aos campos
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlternando os campos das variáveis:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);


    return 0;
}