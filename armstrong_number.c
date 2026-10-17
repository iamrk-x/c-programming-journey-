#include <stdio.h>

int main() {
    int n, copy, temp, digit, digits = 0, i;
    long long sum = 0, power;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    copy = n;
    temp = n;

    if (temp == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        power = 1;
        i = 1;
        while (i <= digits) {
            power *= digit;
            i++;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == copy) {
        printf("%d is an Armstrong number.\n", copy);
    } else {
        printf("%d is not an Armstrong number.\n", copy);
    }
    return 0;
}
