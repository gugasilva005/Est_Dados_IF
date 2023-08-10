#include <stdio.h>

int main(void){

    int tempo_gasto, velocidade_m;
    double calculo_d, total_litros;

    scanf("%d", &tempo_gasto);
    scanf("%d", &velocidade_m);

    calculo_d = tempo_gasto * velocidade_m;

    total_litros = calculo_d / 12;

    printf("TOTAL DE LITROS = %.3lf", total_litros);
    
    return 0;
}