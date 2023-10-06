#include <stdio.h>
#include "lista.h"

void criar(Lista *l) {
    l->tamanho = 0;
}

int vazia(Lista *l) {
    if (l->tamanho == 0) {
        return 1;
    }
    return 0;
}

int cheia(Lista *l) {
    if (l->tamanho == MAX) {
        return 1;
    }
    return 0;
}

void exibir(Lista *l) {
    printf("[ ");
    for (int i = 0; i < l->tamanho; i++) {
        printf("%d ", l->elementos[i]);
    }
    printf("]");
}

int inserir(Lista *l, int elemento){
    if (cheia(l)) {
        return 0;
    } else {
        l->elementos[l->tamanho] = elemento;
        l->tamanho++;
        return 1;
    }
}

int exibir_elemento_por_posicoa(Lista *l, int posicao){
    if (vazia(l) || posicao < 1 || posicao > l->tamanho){
        return -1;
    }
    for (int i = 0; i < l->tamanho; i++) {
        if (l->elementos[i] == posicao) {
            return l->elementos[i];
        }
    }
    return -1;
}

int exibir_posicao_por_elemento(Lista *l, int elemento) {
    for (int i = 0; i < l->tamanho; i++) {
        if (l->elementos[i] == elemento) {
            return i;
        }
    }
    return -1;
}

