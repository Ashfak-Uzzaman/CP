#include <iostream>
using namespace std;

void isKthBitSet_leftshift(int n, int k)
{
    if (n & (1 << k))
        cout << "SET" << '\n';
    else
        cout << "NOT SET" << '\n';
}

void isKthBitSet_rightshift(int n, int k)
{
    if ((n >> k) & 1)
        cout << "SET" << '\n';
    else
        cout << "NOT SET" << '\n';
}

int main()
{
    int n = 5; // 101
    int k = 0;

    // Function call
    isKthBitSet_rightshift(n, k);

    k = 1;
    // Function call
    isKthBitSet_leftshift(n, k);

    k = 2;
    // Function call
    isKthBitSet_rightshift(n, k);

    return 0;
}