#include <bits/stdc++.h>
using namespace std;

// Lower bound = first time কোথায় search করা value পাচ্ছি
// Upper bound = first time কোথায় search করা value থেকে বড় value পাচ্ছি
// Occurrence of x = upper bound - lower bound
int main()
{
    vector<int> a{1, 2, 3, 4, 4, 4, 4, 4, 6, 9, 9, 15, 24, 24, 24, 24, 56, 67};
    //            0  1  2  3  4  5  6  7  8  9 10  11  12  13  14  15  16  17    -> 4 এর lower bound index = 3
    //                     ^              ^                                               upper bound = 6, index = 8

    int x;
    cin >> x;

    auto it = lower_bound(a.begin(), a.end(), x); // log n

    cout << "lower bound = " << (it - a.begin()) << ", value = " << *it << '\n';

    auto itt = upper_bound(a.begin(), a.end(), x); // log n

    cout << "upper bound = " << (itt - a.begin()) << ", value = " << *itt << '\n';

    int Occurrence = (itt - it);
    cout << x << " Occurs " << Occurrence << " times\n";

    ////////////////////////////////////Array////////////////////////////////////////////////////////////////////////////////////////
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 6, 9, 9, 15, 24, 24, 24, 24, 56, 67};
    int n = 18;
    sort(arr, arr + n);

    int upper = upper_bound(arr, arr + n, x) - arr;

    cout << "Upper bound = " << upper << '\n';

    int lower = lower_bound(arr, arr + n, x) - arr;

    cout << "Lower bound = " << lower << '\n';

    return 0;
}