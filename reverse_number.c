#include <stdio.h>

int main() {
    int number, copy, digit, reverse = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    copy = number;

    while (number != 0) {
        digit = number % 10;          // Get the last digit
        reverse = reverse * 10 + digit;
        number /= 10;                 // Remove the last digit
    }

    printf("Original number: %d\n", copy);
    printf("Reversed number: %d\n", reverse);

    return 0;
}
