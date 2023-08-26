#include <stdio.h>

int main(void) {

    float peso;
    int idade;

    scanf("%d", &idade);
    setbuf(stdin, NULL);
    scanf("%f", &peso);

    if (idade > 50) {
        if (peso > 90) {
            printf("1");
        } else if (peso >= 60 && peso <= 90) {
            printf("2");
        } else {
            printf("3");
        }
    }

    else if (idade >= 20 && idade <= 50) {
        if (peso > 90) {
            printf("4");
        } else if (peso >= 60 && peso <= 90) {
            printf("5");
        } else {
            printf("6");
        }
    }

    if (idade < 20) {
        if (peso > 90) {
            printf("7");
        } else if (peso >= 60 && peso <= 90) {
            printf("8");
        } else {
            printf("9");
        }
    }

    return 0;
}