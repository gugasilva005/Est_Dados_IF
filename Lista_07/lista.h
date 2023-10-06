#define MAX 100

typedef struct Lista {
    int elementos[MAX];
    int tamanho;
} Lista;

// Função para inicializar o vetor
void criar(Lista *l);

// Função que retorna se a lista está vazia
int vazia(Lista *l);

// Função que retorna se a lista está cheia
int cheia(Lista *l);

// Função para inserir um elemento em uma lista
int inserir(Lista *l, int tamanho);

// Função para exibir os elementos de uma lista
void exibir(Lista *l);

//Função para exibir UM elemento
int exibir_elemento_por_posicoa(Lista *l, int posicao);

//Função para exibir a posição de um elemento
int exibir_posicao_por_elemento(Lista *l, int elemento);
