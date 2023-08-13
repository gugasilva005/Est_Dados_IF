#include <stdio.h>

int main(void){

    int segundos, horas, minutos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos %= 3600; //=% operação em módulo
    minutos = segundos / 60;
    segundos %= 60;

    printf("%02d:%02d:%02d", horas, minutos, segundos);

    return 0;
}