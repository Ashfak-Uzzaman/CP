#include <stdio.h>

int findImmediateSmallerValue(int arr[], int n, int value)
{
    int left = 0;
    int right = n - 1;
    int immediateSmallerValue = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= value)
        {
            right = mid - 1;
        }
        else
        {
            immediateSmallerValue = arr[mid];
            left = mid + 1;
        }
    }

    return immediateSmallerValue;
}

int findImmediateSmallerIndex(int arr[], int n, int value)
{
    int left = 0;
    int right = n - 1;
    int immediateSmallerIndex = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= value)
        {
            right = mid - 1;
        }
        else
        {
            immediateSmallerIndex = mid;
            left = mid + 1;
        }
    }

    return immediateSmallerIndex;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value = 8;

    int result = findImmediateSmallerValue(arr, n, value);

    if (result == -1)
    {
        printf("No immediate smaller value found.\n");
    }
    else
    {
        printf("Immediate smaller value: %d\n", result);
    }

    int resultIndex = findImmediateSmallerIndex(arr, n, value);

    if (resultIndex == -1)
    {
        printf("No immediate smaller value found.\n");
    }
    else
    {
        printf("Immediate smaller value index: %d\n", resultIndex);
    }

    return 0;
}
