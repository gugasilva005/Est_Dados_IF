#include <stdio.h>
#define TAM 100

void troca_letra(char *str, char original, char novo) {

    for (int i = 0; i < TAM; i++) {
        if (str[i] == original) {
            str[i] = novo;
        }
    }
}

int main(void) {

    char str[TAM], original, novo;

    printf("Digite uma palavra: ");
    fgets(str, TAM, stdin);
    setbuf(stdin, NULL);

    printf("indique uma letra da palavra escrita: ");
    scanf("%c", &original);
    setbuf(stdin, NULL);

    printf("Digite uma nova letra: ");
    scanf("%c", &novo);
    setbuf(stdin, NULL);

    troca_letra(str, original, novo);

    printf("%s", str);

    return 0;
}
