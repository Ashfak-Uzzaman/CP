#include <iostream>                 //Eratosthenes এর চালনি
#include <string.h>
using namespace std;



void sieve(int n)
{
    bool prime[n + 3];
    memset(prime, true, sizeof(prime));  // O(N)

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }


    //printing prime
    int c = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            c++;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Total Prime Number from 0 to "<<n<<" : " << c << '\n';
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        sieve(n);
    }

    return 0;
}
