#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i)   // O(√n)
    {
        if (n % i == 0)
        {
            cnt++;
            divisors.push_back(i);
            if (i != n / i)
            {
                cnt++;
                divisors.push_back(n / i);
            }
        }
    }

    
    // printing divisors
    cout << "Number of divisors: " << cnt << endl;
    cout << "Divisors:\n";
    for (auto u : divisors)
    {
        cout << u << ' ';
    }
    cout << '\n';

    return 0;
}