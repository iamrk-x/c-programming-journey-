#include <stdio.h>

int main(void) {
    int n, target, digit, count = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    printf("Enter the digit to count (0-9): ");
    if (scanf("%d", &target) != 1 || target < 0 || target > 9) {
        printf("Please enter a digit from 0 to 9.\n");
        return 1;
    }

    // Special case: the number 0 contains one zero digit.
    if (n == 0 && target == 0) {
        count = 1;
    }

    while (n != 0) {
        digit = n % 10;
        if (digit == target) {
            count++;
        }
        n /= 10;
    }

    printf("Frequency of %d: %d\n", target, count);
    return 0;
}
