#include <stdio.h>
#include <string.h>
#define TAM 100

void inverte(char *frase, char *ifrase) {
    int tam_frase = strlen(frase);

    for (int i = tam_frase, j = 0; j < tam_frase; i--, j++) {
        ifrase[j] = frase[i-1];
    }
    ifrase[tam_frase]='\0';

}

int main(void) {

    char frase[TAM], ifrase[TAM];

    printf("Digite uma frase: ");
    fgets(frase, TAM-1, stdin);

    inverte(frase, ifrase);

    printf("%s", ifrase);

    return 0;
}
