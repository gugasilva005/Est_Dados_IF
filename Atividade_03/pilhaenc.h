#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox;
} Node;

typedef struct pilha {
    Node *topo;
} Pilha;



// Função de exibição do MENU
void menu();

// Função para limpar o display
void limparTela();

// Função de inicialização da pilha
int cria(Pilha *p);

// Função para empilhar um novo elemento
int empilha(Pilha *p, int elem);

// Função pop()
int desempilha(Pilha *p);

// Função para verificar se uma pilha esta vazia
int vazia(Pilha *p);

// Função para exibir os elementos da pilha
void exibir(Pilha *p);

// Função para retornar o topo
int topo(Pilha *p);

// Função para inverter a pilha
void inverte_pilha(Pilha *p);