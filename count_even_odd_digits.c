#include <stdio.h>

int main(void) {
    int n, digit, even = 0, odd = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        even = 1;
    }

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        n /= 10;
    }

    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);
    return 0;
}
