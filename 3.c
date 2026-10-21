#include <stdio.h>

int main(void) {
    int n;
    int i = 0;
    int number = 10;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    while (i < n) {
        printf("%d ", number);
        number--;
        i++;
    }
    printf("\n");

    return 0;
}
