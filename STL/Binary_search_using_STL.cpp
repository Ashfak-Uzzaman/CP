#include <bits/stdc++.h>
using namespace std;

int main()
{
//             0  1  2  3  4  5  6  7  8  9  10 11  12  13  14  15  16  17
    int a[] = {1, 2, 3, 4, 4, 4, 4, 4, 6, 9, 9, 15, 24, 24, 24, 24, 56, 67};
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    cin >> x;

    // Using Lower bound
    int idx = lower_bound(a, a + n, x) - a;
    cout<<"lowerbound idx = "<<idx<<'\n';
    idx = upper_bound(a, a + n, x) - a;
    cout<<"upperbound idx = "<<idx<<'\n';

    if (a[idx] != x or idx >= n)
        cout << "Not found\n";
    else
        cout << "Found at position: " << idx << '\n';

    // Using Upper bound
    idx = (upper_bound(a, a + n, x) - a) - 1;

    if (a[idx] != x or idx >= n or idx < 0)
        cout << "Not found\n";
    else
        cout << "Found at position: " << idx << '\n';

    ////////////////////////////////////////////////////////////////
    bool z = binary_search(a, a + n, x);

    if (z)
        cout << "Found\n";
    else
        cout << "Not found\n";



///////////////////////////////////Vector////////////////////////////////////////////////////////////

    vector<int> ar{1, 2, 3, 4, 4, 4, 4, 4, 6, 9, 9, 15, 24, 24, 24, 24, 56, 67};
    //             0  1  2  3  4  5  6  7  8  9 10  11  12  13  14  15  16  17    -> 4 এর lower bound index = 3
    //                      ^              ^                                               upper bound = 6, index = 8

    cin >> x;

    auto Lower = lower_bound(ar.begin(), ar.end(), x); // log n

    cout << "lower bound = " << (Lower - ar.begin()) << ", value = " << *Lower << '\n';

    auto Upper = upper_bound(ar.begin(), ar.end(), x); // log n

    cout << "upper bound = " << (Upper - ar.begin()) << ", value = " << *Upper << '\n';

    int Occurrence = (Upper - Lower);
    cout << x << " Occurs " << Occurrence << " times\n";

    z=binary_search(ar.begin(),ar.end(),x);

    return 0;
}