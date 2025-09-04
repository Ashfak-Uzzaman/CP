#include <iostream>
#include <algorithm>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *max = std::max_element(arr, arr + size);
    std::cout << "The largest value in the array is: " << *max << std::endl;

    int *min = std::min_element(arr, arr + size);
    std::cout << "The smallest value in the array is: " << *min << std::endl;
    return 0;
}