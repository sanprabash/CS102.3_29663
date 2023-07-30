#include <stdio.h>

int main() {
    int num, reNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;
        reNumber = reNumber * 10 + remainder;
        num = num / 10;
    } while (num != 0);

    printf("Reversed number: %d\n", reNumber);

    return 0;
}

