#include <stdio.h>

int main(void){

    char nome[10];
    double salario, total_vendas, total_final;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &total_vendas);

    total_final = salario + (total_vendas * 0.15);

    printf("TOTAL = R$ %.2f", total_final);

    return 0;
}