#include <stdio.h>

int fatorial(int num) {
    int resultado = 1;

    for (int i = 1; i < num+1; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {

    int num;

    printf("Digite um número para saber o seu fatorial: ");
    scanf("%d", &num);

    printf("O fatorial deste número é igual a: %d", fatorial(num));

    return 0;
}