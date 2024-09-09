/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;

int count_trailing_zeroes(int n)  // O(log n)
{
    int count = 0;
    while ((n & 1) == 0)
    {
        count += 1;
        n >>= 1;
    }
    return count;
}

bool is_set(unsigned int number, int x)
{
    return (number >> x) & 1;
}

bool isPowerOfTwo(unsigned int n)
{
    return n && !(n & (n - 1));
}

void set_ith_bit(int *n, int i)
{
    *n = (*n) | (1 << i);
}

void clear_ith_bit(int *n, int i)
{
    *n = (*n) & ~(1 << i);
}

void toggol_ith_bit(int *n, int i)
{
    *n = (*n) & ~(1 << i);
}

int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{

    return 0;
}