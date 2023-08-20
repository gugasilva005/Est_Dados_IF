#include <stdio.h>

int main(void) {

    float salario_jorge, salario_saulo;
    float rendimento_jorge = 0.02;
    float rendimento_saulo = 0.05;
    int meses = 0;

    printf("Digite o salário: ");
    scanf("%f", &salario_jorge);

    salario_saulo = salario_jorge / 3.0;

    while (salario_saulo < salario_jorge) {
        salario_jorge += salario_jorge * rendimento_jorge;
        salario_saulo += salario_saulo * rendimento_saulo;
        meses++;
    }

    printf("Saulo levará %d meses para consegui um valor igual ou maior que o salário de Jorge", meses);

    return 0;
}