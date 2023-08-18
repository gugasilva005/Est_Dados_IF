#include <stdio.h>

int main(void) {

    int total_doces, i, doce_barato, auxiliar = 0;
    float preco, peso, preco_unitario, peso_em_kg, total_em_g, total_em_rs;

    printf("Informe o total de doces comprados: ");
    scanf("%d", &total_doces);
    setbuf(stdin, NULL);
    printf("\n");

    for (i = 0; i < total_doces; i++) {
        printf("Doce %d:\n", i+1);
        
        printf("Informe o Peso (g): ");
        scanf("%f", &peso);
        setbuf(stdin, NULL);
        total_em_g += peso;

        printf("Informe o preço (R$): ");
        scanf("%f", &preco);
        if (i == 0) {
            auxiliar = preco;
            doce_barato = i;
        } else {
            if (preco < auxiliar) {
                doce_barato = i+1;
            }
        }

        //peso_em_kg = peso / 1000;
        preco_unitario = (preco * 1000) / peso;
        total_em_rs += preco_unitario;

        printf("Preço unitário calculado = R$ %.2lf/kg\n", preco_unitario);
        printf("\n");

    }

    printf("Dados Finais da Compra:\n");
    
    printf("Produto mais barato: Doce %d\n", doce_barato);

    printf("Foram comprados %.0fg de doce por R$ %.2f", total_em_g, total_em_rs);

    return 0;
}
