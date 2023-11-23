#include <stdio.h>
#include <stdlib.h>
#include "pilhaenc.c"

int main(void) {
    Pilha pilha;

    int elem1 = 1;
    int elem2 = 2;
    int elem3 = 3;
    int elem4 = 4;
    int elem5 = 5;
    int elem6 = 6;
    int elem7 = 7;
    int elem8 = 8;
    int elem9 = 9;
    int elem10 = 10;


    cria(&pilha);

    empilha(&pilha, elem1);
    empilha(&pilha, elem2);
    empilha(&pilha, elem3);
    empilha(&pilha, elem4);
    empilha(&pilha, elem4);
    empilha(&pilha, elem5);
    empilha(&pilha, elem6);
    empilha(&pilha, elem7);
    empilha(&pilha, elem8);
    empilha(&pilha, elem9);
    empilha(&pilha, elem10);


    printf("Pilha normal: ");
    exibir(&pilha);

    inverte_pilha(&pilha);

    printf("\n\nPilha invertida: ");
    exibir(&pilha);

    printf("\n\nPilha invertida novamente: ");
    inverte_pilha(&pilha);
    exibir(&pilha);
    
}