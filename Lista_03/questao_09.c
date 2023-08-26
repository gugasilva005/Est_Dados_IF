#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

    int matriz[10][10];
    int maior_valor, lin, col;
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int num = rand() % 101;

            matriz[i][j] = num;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 9) {
                printf("%d\n", matriz[i][j]);
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if ((i == j) && (i == 0)) {
                maior_valor = matriz[i][j];
                lin = i;
                col = j;
            } else {
                if (matriz[i][j] >= maior_valor) {
                    maior_valor = matriz[i][j];
                    lin = i;
                    col = j;
                }
            }
        }
    }

    printf("\nMAIOR VALOR: %d\n\nCOORDENADAS\nLINHA: %d\nCOLUNA: %d", maior_valor, lin+1, col+1);

    return 0;
}