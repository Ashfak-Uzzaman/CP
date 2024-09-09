#include <bits/stdc++.h>
using namespace std;
// https://takeuforward.org/arrays/implement-lower-bound-bs-2/
// https://takeuforward.org/arrays/implement-upper-bound/

int Lower_bound(int low, int high, int x, int a[], int n)
{
    int mid;
    int ans = n;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] >= x)
        {
            ans = mid;
            high = mid - 1; // look for smaller index on the left
        }
        else
        {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int Upper_bound(int l, int r, int x, int a[], int n)
{
    int mid;
    int upper = n;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] > x)
        {
            upper = mid;
            r = mid - 1;  // look for smaller index on the left
        }
        else
        {
            l = mid + 1; // look on the right
        }
    }
    return upper;
}

int main()
{
    //         0  1  2  3  4  5  6  7  8  9  10 11  12  13  14  15  16  17
    int a[] = {1, 2, 3, 4, 4, 4, 4, 4, 6, 9, 9, 15, 24, 24, 24, 24, 56, 67};
    int n = sizeof(a) / sizeof(a[0]);
    int x;

    while (1)
    {
        cin >> x;
        int Lower = Lower_bound(0, n - 1, x, a, n);
        int Upper = Upper_bound(0, n - 1, x, a, n);
        cout << "Lower Bound: " << Lower << '\n';
        cout << "Upper Bound: " << Upper << '\n';
    }
    return 0;
}