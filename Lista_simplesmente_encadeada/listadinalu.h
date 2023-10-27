typedef struct aluno {
    int matricula;
    char nome[30];
    float nota1, nota2;
}Aluno;

typedef struct node {
    Aluno dado;
    struct node *prox;
}Node;

typedef struct lista {
    Node *inicio;
}ListaAluno;

// Função para criar uma lista vazia
void criar(ListaAluno *l);

// Função para verificar se a lista está vazia
int vazia(ListaAluno *l);

// Função para verificar o tamanho da lista
int tamanho(ListaAluno *l);

// Função para adicionar um novo aluno no final da lista
int inserir_aluno(ListaAluno *l, int matricula, char nome[30], float nota1, float nota2);

// Função para adicionar um novo aluno em uma posição específica da lista
int inserir_na_posicao(ListaAluno *l, int matricula, char nome[30], float nota1, float nota2, int posicao);

// Função para procurar os dados de um aluno via MATRÍCULA
void exibir_aluno(ListaAluno *l, int matricula);

// Função para procurar os dados de(os) aluno(s) via NOME
void exibir_aluno_nome(ListaAluno *l, char nome[30]);

// Função para buscar a posição de um aluno na lista
int busca(ListaAluno *l, int matricula);

// Função para exibir todos os alunos
void exibir_lista(ListaAluno *l);

// Função para exibir o aulo via posição
void exibir_aluno_posicao(ListaAluno *l, int pos);

// Função para remover um aluno da lista via matrícula
int remover(ListaAluno *l, int matricula);
