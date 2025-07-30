#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter side a: ");
    scanf("%f", &a);

    printf("Enter side b: ");
    scanf("%f", &b);

    printf("Enter side c: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        printf("Là 3 cạnh tam giác.\n");
        } else {
            printf("Không phải 3 cạnh tam giác.\n");
        }

    return 0;
}
