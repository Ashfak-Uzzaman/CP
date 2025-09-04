/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;
/* Prime Factorization" is finding which prime numbers multiply together to make the original number.

Given an integer N, find its prime factorization.

For example, n = 24
24 = 2 x 12
24 = 2 x 2 x 6
24 = 2 x 2 x 2 x 3
24 = 2^3 x 3   --> Ans
*/
const int mx = 1e5 + 1;
bitset<mx> marked;
vector<int> primes;

void primefact(vector<pair<int, int>> &primefacts, int n) // for a single number n, there is no need to cheack by only primes.
{                                                         // O(sqrt(n))
    int tmp=n;
    for (int i = 2; i * i <= tmp; i++)
    {
        if (tmp % i == 0)
        {
            int cnt = 0;
            while (tmp % i == 0)
            {
                cnt++;
                tmp = tmp / i;
            }
            primefacts.push_back({i, cnt});
        }
    }
    if (tmp > 1) // if tmp != 1: tmp is the only prime that is greater than sqrt(n)
        primefacts.push_back({tmp, 1});
}

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

    int n;
    cin >> n;

    vector<pair<int, int>> f;
    primefact(f, n); // O(sqrt(n))

    //printing prime factorisation
    for (auto u : f)
        cout << u.first << ' ' << u.second << '\n';
    cout << '\n';

    // Another way by cheaking with only prime numbers
    sieve();
    int tmp = n;
    int c;
    vector<int> Power;
    for (int i = 0; primes[i] * primes[i] <= n; ++i)
    {
        c = 0;
        while (tmp % primes[i] == 0)
        {
            c++;
            tmp /= primes[i];
        }
        Power.push_back(c);
    }

    // Printing
    int i = 0;
    bool z = true;
    for (auto u : Power)
    {
        if (z)
        {
            if (u == 1)
            {
                cout << primes[i];
                z = false;
            }

            else if (u != 0)
            {
                cout << primes[i] << "^" << u;
                z = false;
            }
        }
        else
        {
            if (u == 1)
                cout << " x " << primes[i];

            else if (u != 0)
                cout << " x " << primes[i] << "^" << u;
        }
        i++;
    }
    // if tmp != 1: tmp is the only prime that is greater than sqrt(n)
    if (tmp != 1)
    {
        if (z)
            cout << tmp;
        else
            cout << " x " << tmp;
    }
    cout << '\n';

    return 0;
}