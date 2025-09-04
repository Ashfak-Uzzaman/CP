#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 7;

vector<int> divisors[mx];

int main()
{
    int n;
    cin >> n;
    // Overall Time Complexity: O(n ln(n))
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; j += i) /*      n + n/2 + n/3 + n/4 + ...... + n/n = n * ln(n)  (প্রায়)           */
        {
            divisors[j].push_back(i);
        }
    }

    // Printing
    // for (int i = 1; i <= n; ++i)
    // {
    //     cout << i << " : ";
    //     for (auto u : divisors[i])
    //         cout << u << ' ';
    //     cout << '\n';
    // }
    for (auto u : divisors[100])
        cout << u << ' ';
    cout << "Overall Time Complexity: O(n ln(n))\n";

    return 0;
}
