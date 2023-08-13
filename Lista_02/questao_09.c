#include <stdio.h>

int main(void) {

    int num, i, j;

    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        for (j = 0; j < num; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}