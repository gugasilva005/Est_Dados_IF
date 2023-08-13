#include <stdio.h>

int main(void) {

    int num, i;

    for (i = 1; i <= 500; i += 2) {
        if (i % 3 == 0) {
            num += i;
        }
    }

    printf("%d", num);
    return 0;
}