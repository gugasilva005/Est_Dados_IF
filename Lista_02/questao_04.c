#include <stdio.h>

int main(void) {

    double preco_pao;
    int i;

    scanf("%lf", &preco_pao);

    for (i = 1; i < 51; i++) {
        printf("%d - %.2f\n", i, (preco_pao*i));
    }
    return 0;
}