#include <stdio.h>
#include <stdlib.h>
#include "listadupla.h"

void criar(ListaDE *l) {
    l->ini = l->fim = NULL;
    l->tam = 0;
}

int vazia(ListaDE *l) {
    if (l->ini == NULL) {
        return 1;
    }
    return 0;
}

int tamanho(ListaDE *l) {
    return l->tam;
}

void exibir(ListaDE *l) {
    if (l->ini == NULL) {
        return;
    }
    Node *aux = l->ini;
    while (aux != NULL) {
        printf("ID: %d\nDireção: %c\nDistância: %.2f\n", aux->trecho.id_trecho, aux->trecho.direcao, aux->trecho.distancia);
        aux = aux->prox;
    }
}

int inserir_trecho_final(ListaDE *l, TipoTrecho t) {
    Node *novo = (Node *)malloc(sizeof(Node));

    if (novo == NULL) {
        return 0;
    }

    novo->trecho = t;
    novo->ant = novo->prox = NULL;

    if (vazia(l)) {
        l->ini = l->fim = novo;
        return 1;
    }

    l->fim->prox = novo;
    novo->ant = l->fim;
    l->fim = novo;
    l->tam++;
    return 1;
}

int inserir_trecho_inicio(ListaDE *l, TipoTrecho t) {
    Node *novo = (Node *)malloc(sizeof(Node));

    if (novo == NULL) {
        return 0;
    }

    novo->trecho = t;
    novo->ant = novo->prox = NULL;
    l->tam++;

    if (vazia(l)) {
        l->ini = l->fim = novo;
        return 1;
    }

    novo->prox = l->ini;
    l->ini->ant = novo;
    l->ini = novo;
    return 1;
}

int inserir_trecho_posicao(ListaDE *l, TipoTrecho t, int pos) {
    if (pos < 0 || pos > l->tam) {
        return 0;
    } if (pos == 0) {
        inserir_trecho_final(l, t);
        return 1;
    } if (pos == l->tam) {
        inserir_trecho_final(l, t);
        return 1;
    }

    Node *novo = (Node *)malloc(sizeof(Node));

    if (novo == NULL) {
        return 0;
    }

    Node *aux = l->ini;

    for (int i = 0; i < pos; i++) {
        aux = aux->prox;
    }
    novo->trecho = t;
    novo->ant = aux;
    novo->prox = aux->prox;
    aux->prox->ant = novo;
    aux->prox = novo;
    l->tam++;
    return 1;
}

int busca_id(ListaDE *l, int id) {
    Node *aux = l->ini;
    int pos = 0;

    while(aux != NULL) {
        if (aux->trecho.id_trecho == id) {
            return pos;
        }
        aux = aux->prox;
        pos++;
    }
    return -1; // Falha na busca
}

int buscar_pos(ListaDE *l, int pos) {
    if (pos < 0 || pos > l->tam) {
        return -1; // Falha na busca
    }
    Node *aux = l->ini;
    for(int i = 0; i < pos; i++) {
        aux = aux->prox;
    }
    return aux->trecho.id_trecho;
}

int remover_inicio(ListaDE *l) {
    if (vazia(l)) {
        return 0;
    }
    
    Node *temp = l->ini;
    l->ini = l->ini->prox;
    l->ini->ant = NULL;
    free(temp);
    l->tam--;
    return 1;
}

int remover_final(ListaDE *l) {
    if (vazia(l)) {
        return 0;
    }

    Node *temp = l->fim;
    l->fim = l->fim->ant;
    l->fim->prox = NULL;
    free(temp);
    l->tam--;
    return 1;
}

int remover_id(ListaDE *l, int id) {
    int pos_id = busca_id(l, id);

    if (pos_id == -1) {
        return 0;
    } if (pos_id == 0) {
        remover_inicio(l);
        return 1;
    } if (pos_id == l->tam-1) {
        remover_final(l);
        return 1;
    }

    Node *aux = l->ini;
    for (int i = 0; i < pos_id; i++) {
        aux = aux->prox;
    }

    Node *temp = aux->prox;
    aux->prox->prox->ant = aux;
    aux->prox = aux->prox->prox;
    free(temp);
    l->tam--;
    return 1;
}

float exibir_percurso_total(ListaDE *l) {
    float total_distancia = 0;

    Node *aux = l->ini;
    while (aux != NULL) {
        total_distancia += aux->trecho.distancia;
        aux = aux->prox;
    }
    return total_distancia;
}