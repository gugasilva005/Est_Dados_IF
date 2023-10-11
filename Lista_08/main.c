#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lista.c"

int main(void) {
    Lista le;
    int escolha;
    int elem;
    char s_or_n;

    criar(&le);
    do {
    printf("Editor de Lista\n1 - Exibir Lista\n2 - Inserir\n3 - Remover\n4 - Exibir posição\n5 - Esvaziar lista\n6 - Buscar elemento\n7 - Sair");
    printf("\n\nDigite a opção: ");
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha) {
      case 1:
        if (vazia(&le)){
          printf("A lista está vazia, não há nada para exibir");
        } else {
          exibir(&le);
        }
        break;
      case 2:
        printf("Digite o elemento a ser inserido na lista: ");
        scanf("%d", &elem);
        inserir(&le, elem);
        break;
      case 3:
        printf("Digite o elemento a ser retirado da lista: ");
        scanf("%d", &elem);
        remover(&le, elem);
        printf("Elemento removido com sucesso.");
        break;
      case 4:
        printf("Digite um elemento a ser buscado na lista: ");
        scanf("%d", &elem);
        int pos = busca(&le, elem);
        if (pos == -1){
          printf("O elemento não se encontra na lista.");
          break;
        } else {
          printf("O elemento está na posição %d", pos);
          break;
        }
      case 5:
        printf("Você deseja esvaziar a lista? s/n ");
        scanf("%s", &s_or_n);
        if (s_or_n == 's') {
          esvaziar(&le);
          printf("Lista esvaziada com sucesso.");
          break;
        } else {
          printf("\nAção encerrada");
          break;
        }
      case 6:
        printf("Digite uma posição da lista para obter o elemento: ");
        scanf("%d", &pos);
        if (obterElemento(&le, pos, &elem) == -1) {
          printf("Posição inválida.");
          break;
        } else {
          printf("O elemento da posição %d é o %d", pos, elem);
          break;
        }
      case 7:
        printf("Programa encerrado com sucesso!!!");
        break;
      default:
        printf("Opção inválida. Tente novamente um número indicado no MENU!!!");
    }
    printf("\n\n");
  } while (escolha != 7);

  return 0;
}