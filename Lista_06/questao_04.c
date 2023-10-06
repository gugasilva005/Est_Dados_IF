#include <stdio.h>
#include <math.h>

typedef struct Ponto {
    int x;
    int y;
} Ponto;

float distanciaNova(Ponto *p1, Ponto *p2) {
    float d_x = p1->x - p2->x;
    float d_y = p1->y - p2->y;

    return sqrt(d_x * d_x + d_y * d_y);
}

int main (void) {

    Ponto p1, p2;

    printf("Digite as coordenadas do primeiro ponto (x1, y1):\n")/
    scanf("%d %d", &p1.x, &p1.y);

    printf("Digite as coordenadas do segundo ponto (x2, y2):\n")/
    scanf("%d %d", &p2.x, &p2.y);

    float d = distanciaNova(&p1, &p2);
    printf("%.2f", d);

    return 0;
}