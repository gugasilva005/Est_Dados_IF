#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    int matriz[10][10];
    int soma = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int num = rand() % 101;
            matriz[i][j] = num;

            if (j == 9) {
                printf("%d\n", matriz[i][j]);
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            soma += matriz[i][j];
            if (j == 9) {
                printf("SOMA DA LINHA %d: %d\n", i, soma);
                soma = 0;
            }
        }
    }

    return 0;
}