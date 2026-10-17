#include <stdio.h>

int main() {
    double a, b;
    char operator;

    printf("Enter an expression (for example, 8 + 2): ");
    if (scanf("%lf %c %lf", &a, &operator, &b) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Cannot divide by zero.\n");
                return 1;
            }
            printf("Result: %.2f\n", a / b);
            break;
        default:
            printf("Unknown operator. Use +, -, * or /.\n");
            return 1;
    }

    return 0;
}
