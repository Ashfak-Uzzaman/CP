/*
Prime Factors of 30 = 2, 3, 5                   */
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 1;
bitset<mx> marked;
vector<int> primes;
vector<int> primefactors[mx];
void sieve()
{
    marked[0] = 1, marked[1] = 1;

    for (int i = 3; i * i <= mx; i += 2)
    {
        if (!(marked[i]))
        {
            for (int j = i * i; j <= mx; j += i + i)
                marked[j] = 1;
        }
    }

    primes.push_back(2);
    for (int i = 3; i <= mx; i += 2)
    {
        if (!marked[i] and (i & 1))
            primes.push_back(i);
    }
}

int main()
{
    sieve();
    //int tmp;
    //cin >> n;
    //tmp = n;
    primefactors[2].push_back(2);
    for (int k = 3; k <= mx; ++k)
    {
        if (!marked[k] and (k & 1))
        {
            primefactors[k].push_back(k);
            continue;
        }
        for (int i = 0; primes[i] * primes[i] <= k; ++i)
        {
            if (k % primes[i] == 0)
            {
                primefactors[k].push_back(primes[i]);
                if (!(marked[k / primes[i]]) and primes[i] != k / primes[i] and (k/primes[i])&1)
                {
                    primefactors[k].push_back(k / primes[i]);
                }
            }
        }
    }

    for (int i = 2; i < 501; ++i)
    {
        cout << i << " -> ";
        for (auto u : primefactors[i])
            cout << u << ' ';
        cout << '\n';
    }

    return 0;
}