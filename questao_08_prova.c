#include <stdio.h>

typedef struct {
    float real;
    float imaginario;
} complexo;

complexo soma(complexo *c1, complexo *c2) {
    complexo s;

    s.real = (c1->real + c2->real); 
    s.imaginario = (c1->imaginario + c2->imaginario);

    return s;
}

int main(void) {
    complexo cp1, cp2, cp3;

    cp1.real = 1.0;
    cp1.imaginario = 3.0;
    cp2.real = 2.0;
    cp2.imaginario = 3.0;

    cp3 = soma(&cp1, &cp2);

    printf("\nSoma: (%.1f, %.1f i)", cp3.real, cp3.imaginario);

    return 0;
}