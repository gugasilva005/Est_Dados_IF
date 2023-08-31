#include <stdio.h>

int soma_divisores(int num) {
    int soma = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) soma += i;
    }

    return soma;
}

int sao_amigos (int a, int b) {
    if (soma_divisores(a) == b && soma_divisores(b) == a) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {

    int num_1, num_2;

    printf("Digite dois números para descobrir se eles são amigos: ");
    scanf("%d %d", &num_1, &num_2);

    if (sao_amigos(num_1, num_2)) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}