#include <stdio.h>

int fatorial(int num) {
    for (int i = 1; i < num+1; i++) {
        if (num == 0 || num == 1) {
            return 1;
        } else{
            return num * fatorial(num-1);
        }
    }
}

void n_fatorial(int array_a[], int array_b[]) {
    int num, result;

    for (int i = 0; i < 5; i++) {
        array_b[i] = fatorial(array_a[i]);
    }
}


int main(void) {
    int array_num[5], array_fatorial[5];

    printf("Digite 5 números\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &array_num[i]);
    }

    n_fatorial(array_num, array_fatorial);

    for (int i = 0; i < 5; i++) {
        printf("%d\t", array_fatorial[i]);
    }

    return 0;
}
