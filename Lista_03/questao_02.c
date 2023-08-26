#include <stdio.h>
#define TAM_VET 10

int main(void) {

    int array_num[TAM_VET], array_par[TAM_VET], soma[TAM_VET];
    int i, j, par;

    for (i = 0, j = 10, par = 2; i < 10; i++, j++, par+=2) {
        array_num[i] = j;
        array_par[i] = par;
        soma[i] = j + par;
    }

    for (i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d\n", array_par[i]);
        } else {
            printf("%d ", array_par[i]);
        }
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d\n", array_num[i]);
        } else {
            printf("%d ", array_num[i]);
        }
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", soma[i]);
    }

    return 0;
}