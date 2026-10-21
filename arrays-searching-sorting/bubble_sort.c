#include <stdio.h>

int main()
{
    int arr[4] = {5, 2, 8, 1};
    int i = 0;

    while (i < 3)
    {
        int j = 0;

        while (j < 3 - i)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

            j++;
        }

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
