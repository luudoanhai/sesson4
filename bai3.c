#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("The number %d is divisible by both 3 and 5.\n", number);
    } else if (number % 3 == 0) {
        printf("The number %d is divisible by 3.\n", number);
    } else if (number % 5 == 0) {
        printf("The number %d is divisible by 5.\n", number);
    } else {
        printf("The number %d is not divisible by 3 or 5.\n", number);
    }

    return 0;
}
