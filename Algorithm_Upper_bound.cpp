#include <bits/stdc++.h>
using namespace std;

int Lower_bound(int l, int r, int item, int a[])
{
    int mid, lowerbound = -1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] < item)
            l = mid + 1;

        else if (a[mid] > item)
            r = mid - 1;

        else if (a[mid] == item)
        {
            lowerbound = mid;
            r = mid - 1;
        }
    }

    return lowerbound;
}

int Upper_bound(int l, int r, int x, int a[])
{
    int mid, upper=-1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            l = mid + 1;
        }
        else if (a[mid] > x)
        {
            upper = mid;
            r = mid - 1;
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
        int Lower = Lower_bound(0, n - 1, x, a);
        int Upper = Upper_bound(0, n - 1, x, a);
        cout << "Lower Bound: " << Lower << '\n';
        cout << "Upper Bound: " << Upper << '\n';
    }
    return 0;
}