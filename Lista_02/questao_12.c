#include <stdio.h>

int main(void) {

    int num, i = 1;
    float h_seq, soma;

    printf("Informe o valor de N: ");
    scanf("%d", &num);

    for (i; i <= num; i++) {
        h_seq = 1.0 / i;
        soma += h_seq;
    }
    printf("A soma da série é igual a: %.2lf", soma);

    return 0;
}
