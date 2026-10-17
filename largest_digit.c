#include <stdio.h>

int main(void) {
    int n, digit, largest = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    do {
        digit = n % 10;
        if (digit > largest) {
            largest = digit;
        }
        n /= 10;
    } while (n != 0);

    printf("Largest digit: %d\n", largest);
    return 0;
}
