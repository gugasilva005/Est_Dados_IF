#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM_VET 30

int main(void) {
    int vn[TAM_VET], maior, menor;
    srand(time(0));
    int i;

    for (i = 0; i < 30; i++) {
        int num;

        num = rand() % 101;

        vn[i] = num;
    }

    for (i = 0; i < 30; i++) {
        if (i == 0) {
            maior = vn[i];
            menor = vn[i];
        } else {
            if (vn[i] > maior) maior = vn[i];
            if (vn[i] < menor) menor = vn[i];
        }
        
        printf("%d ", vn[i]);
    }
    
    printf("\nMAIOR NÚMERO: %d\nMENOR NÚMERO: %d", maior, menor);

    return 0;
}
