#include <stdio.h>
#define TAM 100

void remover(char *frase, int pos) {
    frase[pos] = ' ';
}

int main(void) {

    char frase[TAM];
    int pos;

    printf("Digite a frase: ");
    fgets(frase, TAM, stdin);
    setbuf(stdin, NULL);

    printf("Digite a posição para remover o caracter: ");
    scanf("%d", &pos);

    remover(frase, pos);

    printf("%s", frase);

    return 0;
}
