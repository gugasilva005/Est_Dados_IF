#include <stdio.h>

int soma_impares (int array[], int size) {
    int soma;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            soma += array[i];
        }
    }
    return soma;
}

float media_pares (int array[], int size) {
    int soma, cont = 0;
    float media;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            soma += array[i];
            cont++;
        }
    }
    media = (soma / cont);
    if (cont == 0) return 0;
    else return media;
}

int abaixo_70 (int array[], int size) {
    int cont;

    for (int i = 0; i < size; i++) {
        if (array[i] < 70) cont++;
    }
    return cont;
}

int acima_media (int array[], int size) {
    int soma, cont;
    float media;

    for (int i = 0; i < size; i++) {
        soma += array[i];
    }
    media = (soma / media);
    for (int i = 0; i < size; i++) {
        if (array[i] > media) {
            cont++;
        }
    }
    return cont;
}

int main(void) {

    int qtde_notas, notas;

    printf("Insira aki a quantidades de notas: ");
    scanf("%d", &qtde_notas);
    setbuf(stdin, NULL);

    int array_notas[qtde_notas];
    for (int i = 0; i < qtde_notas; i++) {
        printf("Digite a nota: ");
        scanf("%d", &array_notas[i]);
        setbuf(stdin, NULL);
    }

    int s_impar = soma_impares(array_notas, qtde_notas);
    printf("\nA soma das notas ÍMPARES é igual a: %d\n", s_impar);

    float m_par = media_pares(array_notas, qtde_notas);
    printf("\nA média das notas PARES é igual a: %.2f\n", m_par);

    int menor_70 = abaixo_70(array_notas, qtde_notas);
    printf("\nA quantidade de notas ABAIXO de 70 é igual a: %d\n", menor_70);

    int acima_da_media = acima_media(array_notas, qtde_notas);
    printf("\nA quantidade de notas ACIMA da média é igual a: %d\n", acima_da_media);
    
    return 0;
}