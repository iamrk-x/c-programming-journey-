#include <stdio.h>

int main() {
    int n, i = 2, is_prime = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 2) {
        is_prime = 0;
    } else {
        while (i * i <= n) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }
    }

    if (is_prime) {
        printf("%d is prime.\n", n);
    } else {
        printf("%d is not prime.\n", n);
    }

    return 0;
}
