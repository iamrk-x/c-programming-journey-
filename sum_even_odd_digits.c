#include <stdio.h>

int main() {
    int n, digit, even_sum = 0, odd_sum = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 == 0) {
            even_sum += digit;
        } else {
            odd_sum += digit;
        }
        n /= 10;
    }

    printf("Sum of even digits: %d\n", even_sum);
    printf("Sum of odd digits: %d\n", odd_sum);
    return 0;
}
