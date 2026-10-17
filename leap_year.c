// Q25. Check Leap Year
#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return 0;
}
