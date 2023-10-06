typedef struct node {
    int dado;
    struct node *prox;
}Node;

typedef struct lista {
    Node *inicio;
}Lista;

// Função para criar uma lista encadeada vazia
void criar(Lista *l);

// Função para saber se a lista está vazia ou não
int vazia(Lista *l);

// Função para saber o tamanho da lista
int tamanho(Lista *l);

// Função para adicionar novos elementos na lista
int inserir(Lista *l, int elem);

// Função para exibir a lista
void exibir(Lista *l);

// Função para buscar um elemento na lista
int busca(Lista *l, int elem);

// Função para remover um elemento da lista
int remover(Lista *l, int elem);