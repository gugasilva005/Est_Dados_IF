#include <stdio.h>

int main(void) {

    int matriz_diagonal[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == i) {
                matriz_diagonal[i][j] = 1;
            } else {
                matriz_diagonal[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ( j ==4) {
                printf("%d\n", matriz_diagonal[i][j]);
            } else {
                printf("%d\t", matriz_diagonal[i][j]);
            }
        }
    }

    return 0;
}