#include <stdio.h>

struct Ponto{
    int x;
    int y;
};

struct Retangulo {
    struct Ponto v1;
    struct Ponto v2;
};

int ponto_retangulo(struct Ponto p, struct Retangulo r) {
    if (p.x >= r.v1.x && p.x <= r.v2.x && p.y >= r.v1.y && p.y <= r.v2.y) {
        return 1; //Ponto dentro
    } else {
        return 0; // Ponto fora
    }
}

int main(void) {

    struct Retangulo r;
    struct Ponto p;

    printf("Digite as coordenadas do vértice inferior esquerdo (v1):\n");
    scanf("%d %d", &r.v1.x, &r.v1.y);

    printf("Digite as coordenadas do vértice superior direito (v2):\n");
    scanf("%d %d", &r.v2.x, &r.v2.y);

    printf("Digite as coordenadas do ponto (p):\n");
    scanf("%d %d", &p.x, &p.y);

    if (ponto_retangulo(p, r)) {
        printf("O ponto (%d, %d) está DENTRO do retângulo", p.x, p.y);
    } else {
        printf("O ponto (%d, %d) está FORA do retângulo", p.x, p.y);
    }

    return 0;
}