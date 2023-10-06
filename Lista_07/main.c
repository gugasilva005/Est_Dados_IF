#include <stdio.h>
#include "lista.c"


int main(void) {

    Lista lista;
    int elemento, posicao;
    int n_elementos;

    criar(&lista);
    int escolha;
    do {
        printf("Editor de Lista\n");
        printf("------------------------------------\n");
        printf("1 - Exibir Lista\n");
        printf("2 - Inserir\n");
        printf("3 - Remover\n");
        printf("4 - Exibir elemento\n");
        printf("5 - Exibir posição\n");
        printf("6 - Esvaziar Lista\n");
        printf("7 - Inserir na posição\n");
        printf("8 - Sair\n"); 

        printf("Escolha uma das opções: ");
        scanf("%d", &escolha);
        
        switch (escolha) {
            case 1:
                exibir(&lista);
                break;
            case 2:
                printf("Digite o elemento que você deseja adicionar na lista: ");
                scanf("%d", &elemento);
                inserir(&lista, elemento);
                printf("\nElemento adicionado com sucesso!!!");
                break;
            case 3:
                printf("\nElemento removido com sucesso!!!");
                break;
            case 4:
                printf("Digite a posição de um elemento da lista para exibi-lo:");
                scanf("%d", &posicao);
                elemento = exibir_elemento_por_posicoa(&lista, posicao);
                if (elemento < 0) {
                    printf("Posição inválida na lista");
                } else {
                    printf("%d", elemento);
                }
                break;
            case 5:
                printf("Digite o elemento para exibir a sua posição: ");
                scanf("%d", &elemento);
                int aux = exibir_posicao_por_elemento(&lista, elemento);
                if (aux == -1) {
                    printf("Elemento não encontrado na lista!!!");
                } else {
                    printf("%d", aux);
                }
                break;
            case 6:
                printf("Você tem certeza que deseja ESVAZIAR TODA A LISTA? s/n\n");
                char s_n;
                scanf("%c", s_n);
                if (s_n == 'n') {
                    printf("Operação interrompida!!!");
                    break;
                } else {}
                printf("Lista esvaziada com sucesso!!!");
                break;
            case 7:
                printf("Digite o elemento e onde ele será inserido: ");
                printf("Elemento inserido com sucesso!!!");
                break;
            case 8:
                printf("Programa encerrado com sucesso.");
                break;
            default:
            printf("Opção inválida, selecione uma opção VÁLIDA indicada no MENU!!!");
        }
        printf("\n\n");
    } while (escolha != 8);
    


    return 0;
}