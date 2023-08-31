#include <stdio.h>

int eh_primo (int num) {
    if (num <= 1) return 0;

    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return 0;
    }

    return 1;
}

int main(void) {

    int num;

    printf("Digite um número para saber se ele é primo ou não: ");
    scanf("%d", &num);

    if (eh_primo(num) == 0) {
        printf("Este número NÃO é primo!!!");
    } else {
        printf("Este número É primo!!!");
    }

    return 0;
}