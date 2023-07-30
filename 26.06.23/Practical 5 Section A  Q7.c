
#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, nextTerm;

    printf("First 10 Fibonacci Sequence: ");

    for (int i = 1; i <= 10; ++i) {
        printf("%d, ", num1);

        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }

    return 0;
}
