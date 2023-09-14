#include <stdio.h>

void menor_diagonal(int m, int n, int mat[m][n], int *menor, int *l, int *c) {
    *menor = mat[0][0];
    *l = 0;
    *c = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (*menor < mat[i][j]) {
                    *menor = mat[i][j];
                    *l = i+1;
                    *c = j+1;
                }
            }
        }
    }
}

int main(void) {
    
    int lin, col;

    printf("Digite as linhas e colunas da matriz: ");
    scanf("%d %d", &lin, &col);

    int matriz[lin][col];

    printf("Digite os números da matriz: ");
    for (int i = 0; i < lin; i ++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < lin; i ++) {
        for (int j = 0; j < col; j++) {
            if (j == col-1){
                printf("%d\n", matriz[i][j]);
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    
    int menor, l, c;

    menor_diagonal(lin, col, matriz, &menor, &l, &c);

    printf("Menor número da diagonal principal: %d\nLinha: %d\nColuna: %d", menor, l, c);
    
    return 0;
}