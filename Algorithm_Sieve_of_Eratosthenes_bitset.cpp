#include <iostream>
#include <bitset>
using namespace std;
/*
The number of prime numbers less than or equal to n is approximately n/ln(n)
The K-th prime number approximately equals: K ln(K)
*/
bitset<100007> marked;
void sieve(int n)
{

    marked[0] = 1, marked[1] = 1;
    for (int i = 4; i <= n; i += 2)
    {
        marked[i] = 1;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        if (!(marked[i]))
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                marked[j] = 1;
            }
        }
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!marked[i])
        {
            c++;
            cout << i << ' ';
        }
    }

    cout << "\nTotal primes : " << c << '\n';
}

int main()
{
    int n;
    cin >> n;
    sieve(n);

    for (int i = 1; i <= n; ++i)
        cout << i << " is " << ((marked[i]) ? "not prime" : "prime") << endl;

    return 0;
}


void sieve(int n)
{
    bitset<100007> marked;
    marked[0] = 1, marked[1] = 1;
    for (int i = 4; i <= n; i += 2)
        marked[i] = 1;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (!(marked[i]))
        {
            for (int j = i * i; j <= n; j += i + i)
                marked[j] = 1;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (!marked[i])
            cout << i << ' ';
    }
}