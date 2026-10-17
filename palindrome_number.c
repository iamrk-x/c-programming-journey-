#include <stdio.h>

int main() {
    int n, copy, digit, reverse = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    copy = n;
    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (reverse == copy) {
        printf("%d is a palindrome.\n", copy);
    } else {
        printf("%d is not a palindrome.\n", copy);
    }

    return 0;
}
