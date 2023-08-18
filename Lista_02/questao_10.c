#include <stdio.h>
#include <ctype.h>

int main(void) {

    int ano, maior_ano = 0, cont = 0;
    char opcao;
    double velocidade, maior_velo = 0, velo_media, media;

    while (1) {
        scanf("%c", &opcao);
        setbuf(stdin, NULL); 
        if (tolower(opcao) == 'n') {
            if (maior_velo == 0 && maior_ano == 0) {
                printf("zero");
            }
            break;
        }

        scanf("%d", &ano);
        setbuf(stdin, NULL);
        if (ano > maior_ano) {
            maior_ano = ano;
        }

        scanf("%lf", &velocidade);
        setbuf(stdin, NULL);
        if (velocidade > maior_velo) {
            maior_velo = velocidade;
        }
        velo_media += velocidade;
        cont++;
    }

    if (maior_ano > 0 && maior_velo > 0) {
        media = velo_media / cont;
        printf("%.2lf\n%d\n%.2lf", maior_velo, maior_ano, media);
    }
    
    return 0;
}
