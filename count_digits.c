#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Zero has one digit, even though the loop will not run for it.
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            count++;
            n /= 10;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
