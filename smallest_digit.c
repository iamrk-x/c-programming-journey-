#include <stdio.h>

int main() {
    int n, digit, smallest = 9;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        smallest = 0;
    }

    while (n != 0) {
        digit = n % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        n /= 10;
    }

    printf("Smallest digit: %d\n", smallest);
    return 0;
}
