
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "possible permutations:\n";
    do
    {
        for (int i = 0; i < n; ++i)
            cout << arr[i] << ' ';
        cout << endl;
    } while (next_permutation(arr, arr + n));

    cout << "After loop: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    cout << '\n';

    // If we do not sort, it will print the next lexicographically greater value after pprinting the given value

    int ara[] = {3, 2, 1};
    // sort(ara, ara + 3);

    cout << "The 3! possible permutations with 3 elements:\n";
    do
    {
        cout << ara[0] << " " << ara[1] << " " << ara[2] << "\n";
    } while (next_permutation(ara, ara + 3));

    cout << "After loop: ";
    for (int i = 0; i < n; ++i)
        cout << ara[i] << ' ';
    cout << '\n';

    return 0;
}