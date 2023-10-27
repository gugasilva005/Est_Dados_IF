#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listadinalu.h"

void criar(ListaAluno *l) {
    l->inicio = NULL;
}

int vazia(ListaAluno *l) {
    if (l->inicio == NULL)
        return 1;
    return 0;
}

int tamanho(ListaAluno *l){
    int tam = 0;
    Node *aux = l->inicio;
    while (aux != NULL) {
        tam++;
        aux = aux->prox;
    }
    return tam;
}

int inserir_aluno(ListaAluno *l, int matricula, char nome[30], float nota1, float nota2) {
    Node *novo = (Node *) malloc(sizeof(Node));

    if (novo == NULL) {
        printf("Erro na alocação de memória.");
        return 0;
    } if (vazia(l)) { // Caso a lista esteja vazia, reorganiza o terra e o começo da lista
        novo->dado.matricula = matricula;
        strncpy(novo->dado.nome, nome, 30); //Função que copia até 30 caracteres do nome
        novo->dado.nota1 = nota1;
        novo->dado.nota2 = nota2;
        novo->prox = NULL;
        l->inicio = novo;
    } // Caso não...

    Node *aux = l->inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
    novo->dado.matricula = matricula;
    strncpy(novo->dado.nome, nome, 30);
    novo->dado.nota1 = nota1;
    novo->dado.nota2 = nota2;
    novo->prox = NULL;
    return 1;
}

void exibir_aluno(ListaAluno *l, int matricula) {
    Node *aux = l->inicio;

    while (aux != NULL) {
        if (aux->dado.matricula == matricula) { // Percorre a lista procurando a matrícula
            printf("Matricula: %d\n", aux->dado.matricula);
            printf("Nome: %s\n", aux->dado.nome);
            printf("Nota 1: %.1f\n", aux->dado.nota1);
            printf("Nota 2: %.1f\n", aux->dado.nota2);
            return;
        }
        aux = aux->prox;
    }

    // Caso não encontre o aluno
    printf("Matrícula não registrada.");
}

void exibir_lista(ListaAluno *l) {
    printf("Alunos: \n");
    for (Node *aux = l->inicio; aux != NULL; aux = aux->prox) {
        printf("---------------------------\n");
        printf("%s --- %d\n", aux->dado.nome, aux->dado.matricula);
        printf("Notas: 1º - %.1f | 2º - %.1f\n", aux->dado.nota1, aux->dado.nota2);
        printf("---------------------------");
        printf("\n\n");
    }
    printf("------------------------------\nFim da lista.");
}

void exibir_aluno_posicao(ListaAluno *l, int pos) {
    Node *aux = l->inicio;

    if (tamanho(l) < pos) {
        printf("Posição inválida.");
    } else {
        for (aux; aux < pos; aux = aux->prox);

        printf("%s --- %d\n", aux->dado.nome, aux->dado.matricula);
        printf("Notas: 1º - %.1f | 2º - %.1f\n", aux->dado.nota1, aux->dado.nota2);
    }

}

int busca(ListaAluno *l, int matricula) {
    int pos = 0;

    Node *aux = l->inicio;
    while (aux != NULL) {
        if (aux->dado.matricula == matricula) {
            return pos;
        }
        pos++;
        aux = aux->prox;
    }
    return -1;
}


int remover(ListaAluno *l, int matricula) {
    if (vazia(l)) {
        return 0;
    }
    int aluno = busca(l, matricula);
    if (aluno == -1) {
        return 0;
    } if (aluno == 0) {
        Node *temp = l->inicio;
        l->inicio = l->inicio->prox;
        free(temp);
        return 1;
    }

    Node *aux = l->inicio;
    for (int i = 0; i < aluno-1; i++) {
        aux = aux->prox;
    }
    Node *temp = aux->prox;
    aux->prox = aux->prox->prox;
    free(temp);
    return 1;
}

void exibir_aluno_nome(ListaAluno *l, char nome[30]) {
  Node *aux = l->inicio;

  while (aux != NULL) {
      if (strcmp(aux->dado.nome, nome) == 0) { // Percorre a lista procurando o nome
          printf("Matricula: %d\n", aux->dado.matricula);
          printf("Nome: %s\n", aux->dado.nome);
          printf("Nota 1: %.1f\n", aux->dado.nota1);
          printf("Nota 2: %.1f\n", aux->dado.nota2);
          return;
      }
      aux = aux->prox;
  }

  // Caso não encontre o aluno
  printf("Esse nome não está registrado.");
}

int inserir_na_posição(ListaAluno *l, int matricula, char nome[30], float nota1, float nota2) {
  
}
