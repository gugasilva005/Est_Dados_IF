#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct Ponto {
    float x, y;
} Ponto;

typedef struct Circulo {
    char nome[10];
    Ponto centro;
    float raio;
} Circulo;

Circulo *cria_circulo(char *nome, float x, float y, float raio) {
    Circulo *novo_circulo = (Circulo *)malloc(sizeof(Circulo));

    if (novo_circulo != NULL) {
        snprintf(novo_circulo->nome, 10+1, "%s", nome);

        novo_circulo->centro.x = x;
        novo_circulo->centro.y = y;
        novo_circulo->raio = raio;
    }

    return novo_circulo;
}

int contem(Circulo *c1, Circulo *c2) {
    float d;

    d = sqrt(pow(c2->centro.x - c1->centro.x, 2) + pow(c2->centro.y - c1->centro.y, 2));

    if ((d + c2->raio) <= c1->raio){
        return printf("Positivo");
    } else {
        return printf("Negativo");
    }
}


int main(void) {

    Circulo *c1, *c2, *c3;

    c1 = cria_circulo("Circulo01", 3.0, 4.0, 2.0);
    c2 = cria_circulo("Circulo02", 3.0, 3.0, 1.0);
    c3 = cria_circulo("Circulo03", 1.0, 5.0, 1.0);

    printf("%d\n", contem(c1, c2));
    printf("%d\n", contem(c1, c3));

    free(c1);
    free(c2);
    free(c3);

    return 0;
}