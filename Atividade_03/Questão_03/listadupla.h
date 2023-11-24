#include <stdio.h>
#include <stdlib.h>

typedef struct trecho {
    int id_trecho;
    char direcao;
    float distancia;
} TipoTrecho;

typedef struct no {
    TipoTrecho trecho;
    struct no *prox;
    struct no *ant;
} Node;

typedef struct lista {
    Node *ini;
    Node *fim;
    int tam;
} ListaDE;

// Função para criar a lista
void criar(ListaDE *l);

// Função para verificação se a lista está vazia
int vazia(ListaDE *l);

// Função para retornar o tamanho da lista
int tamanho(ListaDE *l);

// Função para exibir o id, sentido e distância do trecho
void exibir(ListaDE *l);

// Função para inserção de um trecho no final da lista
int inserir_trecho_final(ListaDE *l, TipoTrecho t);

// Função para inserção de um trecho no início da lista
int inserir_trecho_inicio(ListaDE *l, TipoTrecho t);

// Função para inserção de um trecho em uma posição específica 
int inserir_trecho_posicao(ListaDE *l, TipoTrecho t, int pos);

// Função para buscar a posição na lista de um trecho a partir do id
int busca_id(ListaDE *l, int id);

// Função para buscar os dados do trecho a partir da posição
int buscar_pos(ListaDE *l, int pos);

// Função para remover um trecho no início da lista
int remover_inicio(ListaDE *l);

// Função para remover um trecho no final da lsita
int remover_final(ListaDE *l);

// Função para remover um trecho dentro da lista a partir do id
int remover_id(ListaDE *l, int id);

// Função para soma total do percurso percorrido
float exibir_percurso_total(ListaDE *l);