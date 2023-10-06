#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main(void) {
    Lista le;
    int escolha;
    int elem;

    criar(&le);
    do {
    printf("Editor de Lista\n1 - Exibir Lista\n2 - Inserir\n3 - Remover\n4 - Exibir posição\n5 - Esvaziar lista\n6 - Sair");
    printf("\n\nDigite a opção: ");
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha) {
      case 1:
        if (vazia(&le)){
          printf("A lista está vazia, não há nada para exibir");
        }
        exibir(&le);
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
    }
    printf("\n\n");
  } while (escolha != 6);

  return 0;
}