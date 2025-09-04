#include <bits/stdc++.h>
using namespace std;

int main()
{ //                 0  1  2  3  4  5  6  7  8  9
    vector<int> a = {5, 6, 1, 3, 8, 9, 2, 4, 9, 7};
    int n = a.size();

    int mx = -1, mx2 = -1; // mx = Max , mx2 = 2nd Max
    int mxi = -1, mx2i = -1;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= mx)
        {
            mx2 = mx;
            mx2i = mxi;
            mx = a[i];
            mxi = i;
        }
        else if (a[i] >= mx2 and a[i] <= mx)
        {
            mx2 = a[i];
            mx2i = i;
        }
    }

    cout << "mxi,mx = " << mxi << ' ' << mx << '\n';     // 8, 9
    cout << "mx2i,mx2 = " << mx2i << ' ' << mx2 << '\n'; // 5, 9

    //                 0  1  2  3  4  5  6  7  8  9  10 11 12 13
    vector<int> ara = {5, 6, 9, 1, 3, 7, 8, 9, 2, 4, 7, 9, 7, 8};
    n = ara.size();

    mx = -1, mxi = -1, mx2 = -1, mx2i = -1;

    for (int i = 0; i < n; ++i)
    {
        if (ara[i] > mx)
        {
            mx2 = mx;
            mx2i = mxi;
            mx = ara[i];
            mxi = i;
        }
        else if (ara[i] > mx2 and ara[i] < mx)
        {
            mx2 = ara[i];
            mx2i = i;
        }
    }

    cout << "mxi,mx = " << mxi << ' ' << mx << '\n';     // 2, 9
    cout << "mx2i,mx2 = " << mx2i << ' ' << mx2 << '\n'; // 6, 8

    return 0;
}
