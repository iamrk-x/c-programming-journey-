#include <stdio.h>

int main(void) {
    int n, digit, product = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        product = 0;
    } else {
        while (n != 0) {
            digit = n % 10;
            product *= digit;
            n /= 10;
        }
    }

    printf("Product of digits: %d\n", product);
    return 0;
}
