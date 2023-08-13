#include <stdio.h>
#include <math.h>

int main(void) {

    int i = 1;
    double preco_produto, total, dinheiro, troco;
    
    printf("Lojas Tabajara\n");
    while (1) {
        printf("Produto %d: R$ ", i);
        scanf("%lf", &preco_produto);
        total += preco_produto;
        if (preco_produto == 0)
            break;
        i += 1;
    }
    printf("\nTotal: R$ %.2f\n", total);
    printf("Dinheiro: R$ ");
    scanf("%lf", &dinheiro);

    troco = fabs(total - dinheiro);
    printf("Troco: R$ %.2f\n", troco);

    return 0;
}