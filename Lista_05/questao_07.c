#include <stdio.h>
#include <math.h>

float desvio_padrao(float *array_num, int tam) {
    float soma = 0, media, resultado = 0;

    for (int i = 0; i < tam; i++) {
        soma += array_num[i];
    }
    media = soma / tam;

    for (int i = 0; i < tam; i++) {
        resultado += pow(array_num[i] - media, 2);
    }

    resultado = sqrt(resultado / tam);

    return resultado;
}

int main(void) {

    int tamanho;

    printf("Digite a quantidade de números: ");
    scanf("%d", &tamanho);

    float num[tamanho], desvio;

    printf("Digite os números: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &num[i]);
    }

    desvio = desvio_padrao(num, tamanho);

    printf("O desvio padrão dos números é: %.2f", desvio);

    return 0;
}