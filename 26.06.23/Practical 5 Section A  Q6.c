
#include <stdio.h>

int main() {
    int base, power, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    if (power >= 0) {
        for (int i = 0; i < power; i++) {
            result *= base;
        }

        printf("%d raised to the power of %d is: %d\n", base, power, result);
    } else {
        printf("Invalid power.\n");
    }

    return 0;
}
