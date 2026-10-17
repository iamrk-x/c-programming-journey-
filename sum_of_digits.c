#include <stdio.h>

int main(void) {
    int number, digit, sum = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    while (number != 0) {
        digit = number % 10;  // Get the last digit
        sum += digit;         // Add it to the sum
        number /= 10;         // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
