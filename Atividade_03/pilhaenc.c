#include <stdio.h>
#include <stdlib.h>
#include "pilhaenc.h"


void menu() {   
    printf("Editor de Pilha v1.0\n");
    printf("=====================\n");
    printf("1 - Inicializar\n2 - Empilhar\n3 - Desempilhar\n4 - Elemento do topo\n5 - Imprimir pilha\n6 - Inverter elementos da pilha\n7 - Esvaziar a pilha\n8 - Mudar de pilha\n9 - Sair");
    printf("\n\nDigite sua opção: ");
}

void limparTela() {
    system("cls");
}

int cria(Pilha *p) {
    p->topo = NULL;
}

int vazia(Pilha *p) {
    if (p->topo == NULL) 
        return 1;
    return 0;
}

void exibir(Pilha *p) {
    if (vazia(p)) {
        printf("A pilha está vazia\n");
        return;
    }

    Node *aux = p->topo;

    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
}

int empilha(Pilha *p, int elem) {
    Node *novo = (Node *)malloc(sizeof(Node));

    if (novo == NULL)
        return 0;
    
    novo->dado = elem;
    novo->prox = p->topo;
    p->topo = novo;
}

int desempilha(Pilha *p) {
    if (vazia(p)) {
        return 0;
    }

    int topo = p->topo->dado;

    Node *temp = p->topo;
    p->topo = p->topo->prox;
    free(temp);

    return topo;
}

int topo(Pilha *p) {
    if (vazia(p)) {
        return -1;
    }
    return p->topo->dado;
}