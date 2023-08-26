#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

    int matriz_a[2][3], matriz_b[2][3], matriz_c[2][3];
    srand(time(0));

    //Formação matriz
    for (int m = 0; m < 2; m++) {
        // Linha
        for (int i = 0; i < 2; i++) {
            // Coluna
            for (int j = 0; j < 3; j++) {

                int num = rand() % 100;

                if (m == 0) {
                    matriz_a[i][j] = num;
                    if (j == 2) {
                        printf("%d\n", matriz_a[i][j]);
                    } else if ((i == 0) && (j == 0)) {
                        printf("Matriz A: \n%d ", matriz_a[i][j]);
                    } else {
                        printf("%d ", matriz_a[i][j]);
                    }
                } else {
                    matriz_b[i][j] = num;
                    if ((i == 0) && (j == 0)) {
                        printf("\nMatriz B: \n%d ", matriz_b[i][j]);
                    } else if (j == 2) {
                        printf("%d\n", matriz_b[i][j]);
                    } else {
                        printf("%d ", matriz_b[i][j]);
                    }
                }
            }
        }
    }
     // Soma
     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];

            if (j == 2) {
                printf("%d\n", matriz_c[i][j]);
            } else if ((i == 0) && (j == 0)) {
                printf("\nMatriz da soma:\n%d ", matriz_c[i][j]);
            } else {
                printf("%d ", matriz_c[i][j]);
            }
        }
     }

    return 0;
}