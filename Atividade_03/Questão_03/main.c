#include <stdio.h>
#include <stdlib.h>
#include "listadupla.c"

int main(void) {
    ListaDE l;
    TipoTrecho t;
    int opcao, chave;
    criar(&l);

    while (1) {
        printf("MENU - Lista Duplamente Encadeada\n\n");
        printf("1 - Exibir Lista\n2 - Inserir no final\n3 - Inserir no início\n4 - Inserir na posição\n5 - Buscar posição via ID\n6 - Buscar ID via posição\n7 - Remover no início\n8 - Remover no final\n9 - Remover via ID\n10 - Percurso\n0 - Sair");
        printf("\nDigite uma das opções: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("\nPrograma encerrado.\n");
                exit(1);
                break;
            case 1:
                if (vazia(&l)) {
                    printf("\nLista Vazia.\n");
                    break;
                }
                printf("\n");
                exibir(&l);
                printf("\n");
                break;
            case 2:
                printf("\nDigite o ID: ");
                scanf("%d", &t.id_trecho);
                printf("\nDigite a direção: ");
                setbuf(stdin, NULL);
                scanf("%c", &t.direcao);
                printf("\nDigite a distância: ");
                scanf("%f", &t.distancia);

                if (inserir_trecho_final(&l, t)) {
                    printf("\nInserido com sucesso.\n");
                } else {
                    printf("\nFalha na inserção.\n");
                }
                break;
            case 3:
                printf("\nDigite o ID: ");
                scanf("%d", &t.id_trecho);
                printf("\nDigite a direção: ");
                setbuf(stdin, NULL);
                scanf("%c", &t.direcao);
                printf("\nDigite a distância: ");
                scanf("%f", &t.distancia);

                if (inserir_trecho_inicio(&l, t)) {
                    printf("\nInserido com sucesso.\n");
                } else {
                    printf("\nFalha na inserção.\n");
                }
                break;
            case 4:
                printf("\nDigite o ID: ");
                scanf("%d", &t.id_trecho);
                printf("\nDigite a direção: ");
                setbuf(stdin, NULL);
                scanf("%c", &t.direcao);
                printf("\nDigite a distância: ");
                scanf("%f", &t.distancia);
                printf("\nDigite a posição que você quer inserir: ");
                scanf("%d", &chave);

                if (inserir_trecho_posicao(&l, t, chave)) {
                    printf("\nInserido com sucesso.\n");
                } else {
                    printf("\nFalha na inserção.\n");
                }
                break;
            case 5:
                printf("\nDigite o ID a ser buscado: ");
                scanf("%d", &chave);

                if (busca_id(&l, chave) != -1) {
                    printf("\nA posição do ID é: %d\n", busca_id(&l, chave));
                } else {
                    printf("\nO ID %d não foi possível ser localizado.\n", chave);
                }
            case 6:
                printf("\nDigite a posição para saber o ID: ");
                scanf("%d", &chave);

                if (buscar_pos(&l, chave) != -1) {
                    printf("\nO ID na posição %d da lista é %d.\n", chave, buscar_pos(&l, chave));
                } else {
                    printf("\nPosição inválida.\n");
                }
                break;
            case 7:
                if (remover_inicio(&l)) {
                    printf("\nRemoção realizada com sucesso.\n");
                } else {
                    printf("\nLista vazia.\n");
                }
                break;
            case 8:
                if (remover_final(&l)) {
                    printf("\nRemoção realizada com sucesso.\n");
                } else {
                    printf("\nLista vazia.\n");
                }
                break;
            case 9:
                printf("\nDigite o ID a ser removido: ");
                scanf("%d", &chave);

                if (remover_id(&l, chave)) {
                    printf("\nRemoção realizada com sucesso.\n");
                } else {
                    printf("\nID não localizado na lista.\n");
                }
                break;
            case 10:
                printf("\nO percurso total é igual a: %.2f", exibir_percurso_total(&l));
                break;
            default:
                printf("\nDigite uma das opções indicadas no MENU.\n");
                break;
        }
        printf("\n");
    }
    return 0;
}