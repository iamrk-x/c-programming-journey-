#include <stdio.h>

int main()
{
    int arr[4] = {5, 2, 8, 1};
    int i = 0;

    while (i < 3)
    {
        int minIndex = i;
        int j = i + 1;

        while (j < 4)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }

            j++;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        i++;
    }

    printf("Sorted array: ");

    i = 0;
    while (i < 4)
    {
        printf("%d ", arr[i]);
        i++;
    }

    printf("\n");
    return 0;
}
