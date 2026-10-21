#include <stdio.h>

int main(void) {
    int n;
    int i = 0;
    double value;
    double sum = 0;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    while (i < n) {
        if (scanf("%lf", &value) != 1) {
            return 0;
        }
        if (value > 0) {
            sum += value;
        }
        i++;
    }

    printf("%.6f\n", sum);

    return 0;
}
