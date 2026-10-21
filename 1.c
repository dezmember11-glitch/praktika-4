#include <stdio.h>

int main(void) {
    const int DAYS_IN_WEEK = 7;
    int days;

    printf("Enter days: ");
    while (scanf("%d", &days) == 1 && days > 0) {
        int weeks = days / DAYS_IN_WEEK;
        int rest = days % DAYS_IN_WEEK;
        printf("%d weeks, %d days\n", weeks, rest);
        printf("Enter days: ");
    }

    return 0;
}
