#include <stdio.h>
#include <stdlib.h>
#include "filaseqcirc.c"


int main(void) {
    Fila f;
    int chave, primeiro_elemento, ultimo_elemento, valor_retirado;
    int opcao;
    cria(&f);

    while(1) {
        printf("MENU - FILA CIRCULAR\n\n");
        printf("1 - Exibir Fila\n2 - Enfileira\n3 - Desenfileira\n4 - Primeiro elemento\n5 - Último elemento\n6 - Sair\n\n");
        printf("Digite a sua opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                if (vazia(&f)) {
                    printf("\nFila vazia\n");
                    break;
                }
                printf("\n");
                exibir(&f);
                printf("\n");
                break;
            case 2:
                printf("\nDigite o elemento a ser inserido na fila: ");
                scanf("%d", &chave);
                if (entra(&f, chave) == 1) 
                    printf("\nElemento inserido com sucesso.\n");
                else {
                    printf("\nNão foi possível inserir o elemento, fila cheia.\n");
                }
                break;
            case 3:
                if (sair(&f, &valor_retirado) == 1) 
                    printf("\nElemento retirado: %d\n", valor_retirado);
                else {
                    printf("\nFila vazia.\n");
                }
                break;
            case 4:
                if (primeiro(&f, &primeiro_elemento) == 1) {
                    printf("\nPrimeiro elemento da fila: %d.\n", primeiro_elemento);
                } else {
                    printf("\nFila vazia.\n");
                }
                break;
            case 5:
                if (ultimo(&f, &ultimo_elemento) == 1) {
                    printf("\nÚltimo elemento da fila: %d.\n", ultimo_elemento);
                } else {
                    printf("\nFila vazia.\n");
                }
                break;
            case 6:
                printf("\nPrograma encerrado.\n");
                exit(0);
            default:
                printf("\nEscolha uma das opções indicadas no MENU.\n");
        }
        printf("\n");
    }

    return 0;
}