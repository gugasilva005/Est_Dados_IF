#include <stdio.h>
#include <stdlib.h>
#include "pilhaenc.c"

int main(void) {
    Pilha pilha;

    int elem1 = 1;
    int elem2 = 2;
    int elem3 = 3;
    int elem4 = 4;

    cria(&pilha);

    empilha(&pilha, elem1);
    exibir(&pilha);
    printf("\n\n");
    empilha(&pilha, elem2);
    empilha(&pilha, elem3);
    printf("topo: %d\n", topo(&pilha));
    empilha(&pilha, elem4);
    printf("\npop: %d\n", desempilha(&pilha));
    exibir(&pilha);
    
}