/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;

const long long mx = 1e8 + 7;

int count_divisors[mx];
int main()
{

    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; ++i) // Overall Time Complexity: O(n ln(n))
    {
        for (int j = i; j <= n; j += i)
        {
            count_divisors[j]++;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << "Number of divisors of " << i << " : ";
        cout << count_divisors[i] << '\n';
    }

    return 0;
}