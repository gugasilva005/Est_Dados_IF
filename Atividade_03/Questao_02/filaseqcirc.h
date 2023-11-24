#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct fila {
    int dados[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

// Função de inicialização da fila
int cria(Fila *f);

// Função para saber se a fila está vazia
int vazia(Fila *f);

// Função para saber se a fila está cheia
int cheia(Fila *f);

// Função para exibição da fila
void exibir(Fila *f);

// Função de retorno do primeiro da fila
int primeiro(Fila *f, int *chave);

// Função para retorno do último da fila
int ultimo(Fila *f, int *chave);

// Função de inserção na fila
int entra(Fila *f, int chave);

// Função de remoção na fila
int sair(Fila *f, int *chave);