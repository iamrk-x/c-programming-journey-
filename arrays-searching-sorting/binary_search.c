#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    /* Binary search requires a sorted array. */
    int arr[5] = {10, 20, 30, 40, 50};
    int target;

    printf("Enter target: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 5, target);

    printf("Index = %d\n", result);

    return 0;
}
