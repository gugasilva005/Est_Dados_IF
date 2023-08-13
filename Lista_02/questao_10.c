#include <stdio.h>
#include <ctype.h>

int main(void) {

    int ano, maior_ano = 0, cont = 0;
    char opcao;
    double velocidade, maior_velo = 0, velo_media, media;

    while (1) {
        scanf("%c", &opcao);
        if (tolower(opcao) == 'n') {
            break;
        }

        scanf("%d", &ano);
        if (ano > maior_ano) {
            maior_ano += ano;
        }

        scanf("%lf", &velocidade);
        velo_media += velocidade;
        if (velocidade > maior_velo) {
            maior_velo += velocidade;
        }
        cont++;
    }
    
    media = velo_media / cont;
    printf("%.2lf\n%d\n%.2lf", maior_velo, ano, media);

    return 0;
}