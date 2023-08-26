#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[10][20];
    char menor[20], maior[20];
    char analise_str[20];

    for (int i = 0; i < 10; i++) {
        scanf("%s", nome[i]);
        setbuf(stdin, NULL);
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            strcpy(menor, nome[0]);
            strcpy(maior, nome[0]);
        } else {
            strcpy(analise_str, nome[i]);

            if (((strcmp(analise_str, menor)) == 1) && (strcmp(analise_str, maior) == 1)) {
                strcpy(maior, analise_str);
            } else if ((strcmp(analise_str, menor) == -1) && (strcmp(analise_str, maior) == -1)) {
                strcpy(menor, analise_str);
            } else {
                continue;
            }
        }
    }

    printf("\nMENOR NOME: %s\nMAIOR NOME: %s", menor, maior);

    return 0;
}