#include <stdio.h>
#include <math.h>

int main(void){

    double area, total_litros, total_latas, preco_total;
    double cobertura_lata = 3.0;
    double tinta_por_lata = 18.0;
    double preco_lata = 80.0;

    scanf("%lf", &area);

    total_litros = ceil(area / cobertura_lata);

    total_latas = (int)ceil(total_litros / tinta_por_lata);

    preco_total = total_latas * preco_lata;

    printf("TOTAL DE LATAS = %.0lf\nPREÇO TOTAL = %.2lf", total_latas, preco_total);

    return 0;
}