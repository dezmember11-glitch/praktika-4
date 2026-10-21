#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t w, h;
    float S;

    printf("Enter width and height: ");
    if (scanf("%hu %hu", &w, &h) != 2) {
        return 0;
    }

    S = (float)w * h / 10000;
    printf("Area = %f\n", S);
    printf("Size of uint16_t = %llu bytes\n", (unsigned long long)sizeof(uint16_t));
    printf("Size of float = %llu bytes\n", (unsigned long long)sizeof(float));

    return 0;
}
