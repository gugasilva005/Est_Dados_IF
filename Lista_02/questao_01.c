#include <stdio.h>

int main(void){

    int n1, n2, n3;
    int auxiliar;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2){
        auxiliar = n1;
        n1 = n2;
        n2 = auxiliar;
    }
    if (n2 > n3){
        auxiliar = n2;
        n2 = n3;
        n3 = auxiliar;
    }
    if (n1 > n2){
        auxiliar = n1;
        n1 = n2;
        n2 = auxiliar;
    }

    printf("%d\n%d\n%d", n3, n2, n1);
    return 0;
}
