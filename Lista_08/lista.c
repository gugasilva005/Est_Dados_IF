#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void criar(Lista *l) {
    l->inicio = NULL;
}

int vazia(Lista *l) {
    if (l->inicio == NULL)
        return 1;
    return 0;
}

int tamanho(Lista *l) {
    int tam = 0;
    Node *aux = l->inicio;
    while (aux != NULL) {
        tam++;
        aux = aux->prox;
    }
    return tam;
}

int inserir(Lista *l, int elem) {
    Node *novo = (Node *) malloc(sizeof(Node));
    if (novo == NULL)
        return 0;
    if (vazia(l)) {
        novo->dado = elem;
        novo->prox = NULL;
        l->inicio = novo;
    }
    Node *aux = l->inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
    novo->dado = elem;
    novo->prox = NULL;
    return 1;
}

void exibir(Lista *l) {
    printf("[ ");
    for (Node *aux = l->inicio; aux != NULL; aux = aux->prox) {
        printf("%d ", aux->dado);
    }
    printf("]");
}

int busca(Lista *l, int elem) {
    int pos = 0;

    Node *aux = l->inicio;
    while (aux != NULL) {
        if (aux->dado == elem) {
            return pos;
        }
        pos++;
        aux = aux->prox;
    }
    return -1;
}

int remover(Lista *l, int elem) {
    if (vazia(l)) {
        return 0;
    }
    int pos = busca(l, elem);
    if (pos == -1) {
        return 0;
    } if (pos == 0) {
        Node *temp = l->inicio;
        l->inicio = l->inicio->prox;
        free(temp);
        return 1;
    }

    Node *aux = l->inicio;
    for (int i = 0; i < pos-1; i++) {
        aux = aux->prox;
    }
    Node *temp = aux->prox;
    aux->prox = aux->prox->prox;
    free(temp);
    return 1;
}

void esvaziar(Lista *l) {
    Node *aux = l->inicio;
    Node *temp;

    while (aux != NULL) {
        temp = aux->prox;
        free(aux);
        aux = temp;
    }
    l->inicio = NULL;
}