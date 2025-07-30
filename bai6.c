#include <stdio.h>

int main() {
    int oldIndex, newIndex, usage;
    float total = 0;

    printf("Enter old meter reading: ");
    scanf("%d", &oldIndex);

    printf("Enter new meter reading: ");
    scanf("%d", &newIndex);

    usage = newIndex - oldIndex;

    if (usage <= 50) {
        total = usage * 1678;
    } else if (usage <= 100) {
        total = 50 * 1678 + (usage - 50) * 1734;
    } else if (usage <= 200) {
        total = 50 * 1678 + 50 * 1734 + (usage - 100) * 2014;
    } else if (usage <= 300) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + (usage - 200) * 2536;
    } else if (usage <= 400) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (usage - 300) * 2834;
    } else {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (usage - 400) * 2927;
    }

    printf("Electricity usage: %d kWh\n", usage);
    printf("Total amount to pay: %.0f VND\n", total);

    return 0;
}
