#include <stdio.h>

int search(int arr[], int n, int target)
{
    int i = 0;

    while (i < n)
    {
        if (arr[i] == target)
        {
            return i;
        }
        i++;
    }

    return -1;
}

int main()
{
    int i = 0;
    int target;
    int arr[5];

    printf("Enter 5 elements:\n");

    while (i < 5)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    printf("Enter the target:\n");
    scanf("%d", &target);

    int result = search(arr, 5, target);

    printf("Index = %d\n", result);

    return 0;
}
