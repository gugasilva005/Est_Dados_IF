#include <stdio.h>

struct Ponto{
    int x;
    int y;
};

int ponto_retangulo(struct Ponto p, struct Ponto v1, struct Ponto v2) {
    if (p.x >= v1.x && p.x <= v2.x && p.y >= v1.y && p.y <= v2.y) {
        return 1; //Ponto dentro
    } else {
        return 0; // Ponto fora
    }
}

int main(void) {

    struct Ponto v1, v2, p;

    printf("Digite as coordenadas do vértice inferior esquerdo (v1):\n");
    scanf("%d %d", &v1.x, &v1.y);

    printf("Digite as coordenadas do vértice superior direito (v2):\n");
    scanf("%d %d", &v2.x, &v2.y);

    printf("Digite as coordenadas do ponto (p):\n");
    scanf("%d %d", &p.x, &p.y);

    if (ponto_retangulo(p, v1, v2)) {
        printf("O ponto (%d, %d) está DENTRO do retângulo", p.x, p.y);
    } else {
        printf("O ponto (%d, %d) está FORA do retângulo", p.x, p.y);
    }

    return 0;
}