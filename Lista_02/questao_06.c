#include <stdio.h>
#include <math.h>

int main(void) {

    double coef_a, coef_b, coef_c;
    double delta, calc_x, calc_x1, calc_x2;

    scanf("%lf%lf%lf", &coef_a, &coef_b, &coef_c);

    delta = pow(coef_b, 2) - (4 * coef_a * coef_c);

    if (delta < 0) {
        printf("Raízes não existentes");
    } else if (delta == 0) {
        calc_x = -coef_b / (2 * coef_a);
        printf("As raízes de x1 e x2 é igual a %.0f", calc_x);
    } else if (delta > 0) {
        calc_x1 = (-coef_b + sqrt(delta)) / (2 * coef_a);
        calc_x2 = (-coef_b - sqrt(delta)) / (2 * coef_a);
        printf("As raízes de x1 e x2 são respectivamente %.0f e %0.f", calc_x1, calc_x2);
    }

    return 0;
}