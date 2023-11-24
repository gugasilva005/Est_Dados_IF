#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){

    // INICIALMENTE ELE CONSIDERA TRABALHANDO NA PILHA 1

    int op = -1;
    Pilha p1, p2, p3;
    criarPilha(&p1);
    criarPilha(&p2);
    criarPilha(&p3);
    Pilha *paux = &p1;

    for (int i = 0; op != 0; i++){
        exibeMenu();
        setbuf(stdin, NULL);
        printf("Digite sua opção: ");
        scanf("%d", &op);


        switch (op){
        case 1:
            printf("Pilha foi criada com sucesso!\n");
            break;
        case 2:
            int elemento;
            printf("Digite o elemento a ser empilhado:\n");
            setbuf(stdin, NULL);
            scanf("%d", &elemento);
            inserirPilha(paux, elemento);
            setbuf(stdin, NULL);
            break;
        case 3:
            int dado;
            if (removerPilha(paux, &dado) != -1){
                printf("O Elemento removido foi: %d\n", dado);
            } else{
                printf("Pilha vazia! Não há elementos para remoção\n");
            }
            (paux);
            break;
        case 4:
            printf("O topo da pilha é: %d\n", topoPilha(paux));
            break;
        case 5:
            exibePilha(paux);
            break;
        case 6:
            inverteElePilha(paux);
            exibePilha(paux);
            break;
        case 7:
            esvaziaPilha(paux);
            break;
        case 8:
            int opp;
            printf("Deseja trabalhar com qual pilha?\n1. Pilha 1\n2. Pilha 2\n3. Pilha 3\n");
            scanf("%d", &opp);
            switch (opp){
            case 1:
                paux = &p1;
                printf("Agora as operações serão realizadas na pilha 1\n");
                break;
            case 2:
                paux = &p2;
                printf("Agora as operações serão realizadas na pilha 2\n");
                break;
            case 3:
                paux = &p3;
                printf("Agora as operações serão realizadas na pilha 3\n");
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }
}