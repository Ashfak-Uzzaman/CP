#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long a = 14578563559536356;
    long long b = 31516351354135121;
    long long c = 99987445522222220;
    long long m = 1000000007; // 10^9 + 7

    //  Take modulo at each intermediate steps:

    long long i = 1;
    i = (i * a) % m; // i = 508086243
    i = (i * b) % m; // i = 144702857
    i = (i * c) % m; // i = 798848767

    //  This Method always gives the correct answer!!!

    cout << "Enter three number for multiply:\n";
    cin >> a >> b >> c;

    i = 1;
    i = (i * a) % m;
    i = (i * b) % m;
    i = (i * c) % m;
    cout << "a x b x c = " << i;

    return 0;
}
