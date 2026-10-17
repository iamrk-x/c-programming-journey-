#include <stdio.h>

int main(void) {
    int n, copy, temp, digit, digits = 0;
    long long sum = 0, power;
    
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    copy = n;
    temp = n;

    // Count the digits. Zero has one digit.
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = n;
    do {
        digit = temp % 10;
        power = 1;

        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == copy) {
        printf("%d is an Armstrong number.\n", copy);
    } else {
        printf("%d is not an Armstrong number.\n", copy);
    }

    return 0;
}
