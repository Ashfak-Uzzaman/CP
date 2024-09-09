#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int a[5] = {10, 2, 4, 5, 6};
    sort(a, a + 5);
    bool x = binary_search(a, a + 5, 5);
    cout << x << endl;

    x = binary_search(a, a + 5, 50);
    cout << x << endl;

    vector<int> v = {10, 2, 4, 5, 6};
    sort(v.begin(), v.end());

    bool y = binary_search(v.begin(), v.end(), 2);
    cout << y << endl;

    y = binary_search(v.begin(), v.end(), 10);
    cout << y << endl;
    y = binary_search(v.begin(), v.end(), 12);
    cout << y << endl;

    y = binary_search(v.begin(), v.end(), 6);
    cout << y << endl;
    y = binary_search(v.begin(), v.end(), 5);
    cout << y << endl;
    y = binary_search(v.begin(), v.end(), 42);
    cout << y << endl;

    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    // Perform binary search using std::binary_search
    bool found = std::binary_search(arr, arr + n, target);
    if (found)
    {
   
        int *p = std::lower_bound(arr, arr + n, target);   // Get a pointer to the first occurrence of the target element
    
        int index = p - arr;       // Calculate the index of the element in the array
        cout << "Target found at index " << index << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }

    return 0;
}