#include <stdio.h>

int main() {
    int month;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        printf("Month %d has 31 days.\n", month);
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            printf("Month %d has 30 days.\n", month);
        } else if (month == 2) {
            printf("Month %d has 28 or 29 days (depending on leap year).\n", month);
        } else {
            printf("Invalid month number: %d\n", month);
        }

    return 0;
}
