#include <stdio.h>

int eh_primo (int num) {
    if (num <= 1) return 0;

    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return 0;
    }

    return 1;
}

int soma_primos(int x, int y){
    int soma_primos = 0;

    for (int i = x; i <= y; i++) {
        if (eh_primo(i) == 1) {
            soma_primos += i;
        }
    }
    return soma_primos;
}


int main(void) {

    int x, y;
    int total;

    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    total = soma_primos(x, y);
    printf("A soma dos números primos entre %d e %d é igual a %d", x, y, total);

    return 0;
}