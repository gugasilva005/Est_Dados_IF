typedef struct nof{
    int dado;
    struct nof *prox;
} NoF;

typedef struct fila{
    int tamanho;
    NoF *inicio;
    NoF *final;
} Fila;

void criarFila(Fila *f);
int filaVazia(Fila *f);
int tamanhoFila(Fila *f);
int inserirFila(Fila *f, int elemento);
int removerFila(Fila *f, int *elemento);
void exibirFila(Fila *f);


typedef struct nop{
    int dado;
    struct nop *prox;
} NoP;

typedef struct pilha{
    NoP *topo;
    int tamanho;
} Pilha;

void criarPilha(Pilha *p);
int pilhaVazia(Pilha *p);
int tamanhoPilha(Pilha *p);
int removerPilha(Pilha *p, int *ele);
int inserirPilha(Pilha *p, int elemento);
int topoPilha(Pilha *p);
Pilha inverteElePilha(Pilha *p);
void esvaziaPilha(Pilha *p);
void exibePilha(Pilha *p);


void exibeMenu();