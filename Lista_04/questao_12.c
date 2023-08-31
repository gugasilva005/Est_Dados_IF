#include <stdio.h>

void transfere_matriz(int lin, int col, int array[], int matriz[][col]){
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            array[i * col + j] = matriz[i][j];
        }
    }
}


int main(void) {

    int lin, col;

    printf("Digite o tamanho de sua matriz (linha e coluna): ");
    scanf("%d %d", &lin, &col);

    int matriz[lin][col];

    printf("Digite os números da matriz: ");
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int array[lin*col];

    transfere_matriz(lin, col, array, matriz);

    for (int i = 0; i < (lin*col); i++) {
        printf("%d\t", array[i]);
    }


    return 0; 
}