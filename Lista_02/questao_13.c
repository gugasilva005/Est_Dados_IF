#include <stdio.h>

int main(void) {

    float numerador, denominador;
    float h_seq, soma;

    for (numerador = 1, denominador = 1; numerador <= 99, denominador <= 50; numerador += 2, denominador++) {
        h_seq = numerador / denominador;
        soma += h_seq;
    }

    printf("%.2lf", soma);

    return 0;
}