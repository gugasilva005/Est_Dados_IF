#include <stdio.h>

int main(void) {

    int num, i, j;

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        for (j = 1; j <= num; j++) {
            printf("%d ", j);
            if (j == num) {
                printf("\n");
            }  
        }
    }

    return 0;
}