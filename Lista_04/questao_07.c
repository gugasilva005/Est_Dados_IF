#include <stdio.h>
#include <string.h>

int identifica_vogais(char nome[]) {
    int eh_vogal = 0;
    char vogal[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int i = 0; i < strlen(nome); i++) {
        for (int j = 0; j < 5; j++) {
            if (nome[i] == vogal[j]) {
                eh_vogal++;
                break;
            }
        }
    }
    return eh_vogal;
}


int main(void) {

    char nome[100];
    int vogais;

    printf("Digite um nome: ");
    scanf("%s", &nome);

    vogais = identifica_vogais(nome);
    printf("O nome possui %d vogais.", vogais);

    return 0;
}