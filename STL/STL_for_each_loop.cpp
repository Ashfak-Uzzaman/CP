#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto u : a)  // will not store in a
        cin >> u;
    for (auto u : a)  // will print garbage
        cout << u << ' ';
    cout << '\n';

    for (auto &u : a) // will store in a
        cin >> u;
    for (auto u : a)  // will print the values that is taken in input
        cout << u << ' ';
    cout << '\n';
    return 0;
}