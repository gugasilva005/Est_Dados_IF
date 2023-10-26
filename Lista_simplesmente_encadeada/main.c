#include <stdio.h>
#include <stdlib.h>
#include "listadinalu.c"

int main(void) {
    ListaAluno lista_alunos;

    criar(&lista_alunos);

    int matricula = 100;
    char nome[30] = "Gustavo";
    float nota1 = 8.7;
    float nota2 = 9.5;

    if (inserir_aluno(&lista_alunos, matricula, nome, nota1, nota2)) {
        printf("Aluno inserido com sucesso.\n");
    } else {
        printf("Falha ao inserir o aluno.\n");
    }

    int matricula2 = 200;
    char nome2[30] = "Maria";
    float nota3 = 9.0;
    float nota4 = 7.0;

    if (inserir_aluno(&lista_alunos, matricula2, nome2, nota3, nota4)) {
        printf("Aluno inserido com sucesso.\n");
    } else {
        printf("Falha ao inserir o aluno.\n");
    }    
    

    int matricula3 = 300;
    char nome3[30] = "Josué";
    float nota5 = 7.5;
    float nota6 = 8.0;

    if (inserir_aluno(&lista_alunos, matricula3, nome3, nota5, nota6)) {
        printf("Aluno inserido com sucesso.\n");
    } else {
        printf("Falha ao inserir o aluno.\n");
    }

    printf("\n");
    exibir_lista(&lista_alunos);

    remover(&lista_alunos, 100);

    printf("\n\n\n");
    exibir_lista(&lista_alunos);

    printf("\n");
    int matricula4 = 400;
    char nome4[30] = "Gabriel";
    float nota7 = 4.0;
    float nota8 = 3.5;

    if (inserir_aluno(&lista_alunos, matricula4, nome4, nota7, nota8)) {
        printf("Aluno inserido com sucesso.\n");
    } else {
        printf("Falha ao inserir o aluno.\n");
    }

    printf("\n\n\n");
    exibir_lista(&lista_alunos);
    

    

}