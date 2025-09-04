#include <bits/stdc++.h>
using namespace std;

// -1 4 -1 0 5 -4
// Find the maximum sub array sum = 4 -1 0 5 = 8

int maxsubsrray(int a[], int n)
{
    int curr = 0, ans = INT_MIN; // curr=current_subarray_sum

    for (int i = 0; i < n; ++i)
    {
        curr = max(a[i], curr + a[i]);
        ans = max(ans, curr);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int curr = 0, ans = INT_MIN; // curr=current_subarray_sum

    for (int i = 0; i < n; ++i)
    {
        curr = max(a[i], curr + a[i]);
        ans = max(ans, curr);
    }
    cout << ans << endl;
    cout << maxsubsrray(a, n) << endl;

    return 0;
}
