#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    printf("Enter an integer from 0 to 20: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Please enter an integer from 0 to 20.\n");
        return 1;
    }

    while (i <= n) {
        factorial *= (unsigned long long)i;
        i++;
    }

    printf("%d! = %llu\n", n, factorial);
    return 0;
}
