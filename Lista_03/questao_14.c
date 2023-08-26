#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void) {

    char frase[TAM];
    char letra;
    int tam_str;

    fgets(frase, 99, stdin);
    setbuf(stdin, NULL);

    scanf("%c", &letra);
    setbuf(stdin, NULL);

    tam_str = strlen(frase);

    int cont = 0;

    for (int i = 0; i < tam_str; i++) {
        if (frase[i] == letra) {
            cont += 1;
        }
    }

    printf("%d", cont);

    return 0;
}