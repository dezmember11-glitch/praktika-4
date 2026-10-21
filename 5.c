#include <stdio.h>

double mv_to_v(double value) {
    const double MV_PER_V = 1000.0;
    return value / MV_PER_V;
}

int main(void) {
    double value;

    while (scanf("%lf", &value) == 1) {
        printf("%.2f\n", mv_to_v(value));
    }

    return 0;
}
