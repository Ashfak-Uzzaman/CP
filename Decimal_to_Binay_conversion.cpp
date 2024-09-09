#include <stdio.h>
#include <iostream> // 2^31-1 = 2147483647 = INT_MAX
#include <string>
#include <algorithm>
using namespace std;

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
    {

        (n & i) ? printf("1") : printf("0");
    }
}

void Bin(unsigned n)
{
    string s;
    for (n; n != 0; n = n >> 1)
    {
        (n & 1) ? s.push_back('1') : s.push_back('0');
    }
    reverse(s.begin(), s.end());
    cout << s;
}

void BIN(unsigned x)
{
    for (int i = 30; i > -1; --i)
    {
        if (x & (1 << i))
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
}


int main()
{
    int x;
    while (1)
    {
        cin >> x;
        Bin(x);
        cout << '\n';
        bin(x);
        cout << '\n';
    }

    return 0;
}


