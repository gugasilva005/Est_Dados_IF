#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void criarFila(Fila *f){
    f->inicio = NULL;
    f->final = NULL;
    f->tamanho = 0;
}

int filaVazia(Fila *f){
    if ((f->inicio == NULL) && (f->final == NULL)){
        return 1;
    } else{
        return -1;
    }
}

int tamanhoFila(Fila *f){
    return f->tamanho;
}

int inserirFila(Fila *f, int elemento){

    NoF *novo = (NoF *)malloc(sizeof(NoF));

    if (novo != NULL){
        novo->dado = elemento;
        if (filaVazia(f) == 1){
            f->inicio = novo;
            f->final = novo;
            novo->prox = NULL;
        } else{
            f->final->prox = novo;
            f->final = novo;
            novo->prox = NULL;
        }
        f->tamanho++;
        return 1;
    } else{
        return -1;
    }
}

int removerFila(Fila *f, int *elemento){
    NoF *novo = f->inicio;
    if (filaVazia(f) == 1){
        return -1;
    } else{
        *elemento = novo->dado;
        if (f->inicio != f->final){
            f->inicio = f->inicio->prox;  // o inicio vai apontar para o segundo elemento
        } else{
            f->inicio = f->final = NULL;
        }
        free(novo);
        f->tamanho--;
        return 1;
    }

    // Caso eu não queria saber o elemento removido eu posso colocar NULL como parametro
}

void exibirFila(Fila *f){

    if (filaVazia(f) == 1){
        printf("0");
    } else{
        NoF *aux = f->inicio;
        while (aux != NULL){
            printf("%d\t", aux->dado);
            aux = aux->prox;
        }
    }
}


void criarPilha(Pilha *p){
    p->topo = NULL;
    p->tamanho = 0;
}

int pilhaVazia(Pilha *p){
    if ((p->topo == NULL) || (p->tamanho == 0)){
        return 1;
    } else{
        return -1;
    }
}

int tamanhoPilha(Pilha *p){
    return p->tamanho;
}

int removerPilha(Pilha *p, int *ele){
    if(p->topo == NULL){
        return -1;
    } else{
        *ele = p->topo->dado;
        NoP *aux = p->topo;
        p->topo = aux->prox;
        free(aux);
        p->tamanho--;
        return 1;
    }
}

int inserirPilha(Pilha *p, int elemento){
    NoP *novo = (NoP *)malloc(sizeof(NoP));
    novo->dado = elemento;
    if(novo == NULL || p == NULL){
        return -1;
    } else if(p->topo == NULL){
        novo->prox = NULL;
        p->topo = novo;
    } else{
        novo->prox = p->topo;
        p->topo = novo;
    }
    p->tamanho++;
    return 1;
}

int topoPilha(Pilha *p){
    return p->topo->dado;
}

void exibePilha(Pilha *p){
    NoP *aux = p->topo;
    while(aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}

void esvaziaPilha(Pilha *p){
    char alt;
    printf("Deseja esvaziar a pilha [S/N]:\n");
    setbuf(stdin, NULL);
    scanf("%c", &alt);
    setbuf(stdin, NULL);
    if ((alt == 's') || (alt == 'S')){
        criarPilha(p);
        printf("Pilha esvaziada!");
    } else{
        printf("Pilha não esvaziada");
    }
}

Pilha inverteElePilha(Pilha *p){
    Fila auxf;
    criarFila(&auxf);
    NoP *auxp = p->topo;
    while (auxp != NULL)
    {
        inserirFila(&auxf, auxp->dado);
        auxp = auxp->prox;
    }

    criarPilha(p);
    NoF *auxf2 = auxf.inicio;
    while (auxf2 != NULL){
        inserirPilha(p, auxf2->dado);
        auxf2 = auxf2->prox;
    }

    return *p;
}



void exibeMenu(){

    printf("Editor de Pilha v1.0\n");
    printf("====================\n");
    printf("1. Inicializar\n");
    printf("2. Empilhar\n");
    printf("3. Desempilhar\n");
    printf("4. Elemento do topo\n");
    printf("5. Imprimir pilha\n");
    printf("6. Inverter elementos da pilha\n");
    printf("7. Esvaziar a pilha\n");
    printf("8. Mudar da pilha\n");
    printf("0. Sair\n");

}