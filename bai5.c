#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Enter the third integer: ");
    scanf("%d", &num3);

    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("The third number (%d) is between %d and %d.\n", num3, num1, num2);
    } else {
        printf("The third number (%d) is NOT between %d and %d.\n", num3, num1, num2);
    }

    return 0;
}
