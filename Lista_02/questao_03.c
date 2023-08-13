#include <stdio.h>

int main(void) {

    float peso;
    int idade;

    scanf("%d", &idade);
    scanf("%lf", &peso);

    if (idade < 20) {
        if (peso <= 60) { 
            printf("9");
        } if (peso > 60 && peso <= 90) {
             printf("8");
        } else { 
            printf("7");
        }
    }


    return 0;
}