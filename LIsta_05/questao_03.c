#include <stdio.h>
#define TAM 10

void multiplica_2(int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *array *= 2;
        array++;
    }
}

int main(void) {

    int array_num[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite um número: ");
        scanf("%d", &array_num[i]);
    }

    for (int i = 0; i < TAM; i++) {
        printf("%d\t", array_num[i]);
    }

    printf("\n");
    multiplica_2(array_num, TAM);

    for (int i = 0; i < TAM; i++) {
        printf("%d\t", array_num[i]);
    }

    return 0;
}
