
#include <stdio.h>

int main() {
    int num, tot = 0;

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        tot += num;
    }

    printf("Sum of the numbers: %d\n", tot);

    return 0;
}
