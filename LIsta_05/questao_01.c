#include <stdio.h>

void soma_maior_menor(int array[], int size, int *soma, int *maior, int *menor) {
    if (size == 0) {
        *soma = 0;
        *maior = 0;
        *menor = 0;
        return;
    }

    *soma = array[0];
    *maior = array[0];
    *menor = array[0];

    for (int i = 1; i <size; i++) {
        *soma += array[i];

        if (array[i] > *maior) {
            *maior = array[i];
        }
        if (array[i] < *menor) {
            *menor = array[i];
        }
    }
}


int main(void) {

    int qtde_num;

    printf("Quantidade de números no vetor: ");
    scanf("%d", &qtde_num);
    int array_num[qtde_num];

    for (int i = 0; i < qtde_num; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &array_num[i]);
        setbuf(stdin, NULL);
    }
    
    int soma, maior, menor;
    
    soma_maior_menor(array_num, qtde_num, &soma, &maior, &menor);

    printf("Soma: %d\nMaior número: %d\nMenor número: %d", soma, maior, menor);

    return 0;
}