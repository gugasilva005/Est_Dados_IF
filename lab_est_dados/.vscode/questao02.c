#include <stdio.h>

int main(void){

    double pes, jardas, milhas, polegadas; 
    double conversao_pe_jarda, conversao_pe_polegada, conversao_pe_milha;

    scanf("%lf", &pes);

    conversao_pe_polegada = (pes * 12);

    conversao_pe_jarda = (pes / 3);

    conversao_pe_milha = (pes / 5280);

    printf("POLEGADAS = %.2f\nJARDAS = %.3lf\nMILHAS = %.9lf", conversao_pe_polegada, conversao_pe_jarda, conversao_pe_milha);
    
    return 0;
}