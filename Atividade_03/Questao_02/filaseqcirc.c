#include <stdio.h>
#include "filaseqcirc.h"

int cria(Fila *f) {
    f->inicio = f->fim = f->tamanho = 0;
}

int vazia(Fila *f) {
    if (f->tamanho == 0) {
        return 1;
    }
    return 0;
}

int cheia(Fila *f) {
    if ((f->fim + 1) % MAX == f->inicio) {
        return 1;
    }
    return 0;
}

void exibir(Fila *f) {
    if (f->inicio <= f->fim) {
        for (int i = f->inicio; i < f->fim; i++) {
            printf("%d ", f->dados[i % MAX]);
        }
    } else if (f->inicio > f->fim) {
        for (int i = f->inicio; i < MAX; i++) {
            printf("%d ", f->dados[i % MAX]);
        }
        for (int i = f->inicio; i < f->fim; i++) {
            printf("%d ", f->dados[i % MAX]);
        }
    }
}

int primeiro(Fila *f, int *chave) {
    if (vazia(f)) {
        return 0;
    }
    *chave = f->dados[f->inicio % MAX];
    return 1;
}

int ultimo(Fila *f, int *chave) {
    if (vazia(f)) {
        return 0;
    } if ((f->fim % MAX) == 0) {
        *chave = f->dados[MAX-1];
        return 1;
    }
    *chave = f->dados[(f->fim - 1) % MAX];
    return 1;
}

int entra(Fila *f, int chave) {
    if (cheia(f)) {
        return 0;
    }
    f->dados[f->fim] = chave;
    f->tamanho++;
    f->fim = (f->fim + 1) % MAX;
    return 1;
}

int sair(Fila *f, int *chave) {
    if (vazia(f)) {
        return 0;
    }
    *chave = f->dados[f->inicio];
    f->tamanho--;
    f->inicio = (f->inicio + 1) % MAX;
    return 1;
}