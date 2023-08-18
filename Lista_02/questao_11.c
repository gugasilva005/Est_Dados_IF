#include <stdio.h>

int main(void) {

    int num, i, ePrimo;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            ePrimo++;
        }
    }

    if (ePrimo == 2) {
        printf("É primo!");
    } else {
        printf("Não é primo!");
    }

    return 0;
}
