/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 15; // 1111 << 4 = 11110000
    int y = 4;

    cout << (x << y) << endl; // n ঘর Left Shift করা মানে 2^n দ্বারা গুণ

    x = 115; // 1110011 >> 4 = 111
    y = 4;

    cout << (x >> y) << endl; // n ঘর Right Shift করা মানে 2^n দ্বারা ভাগ (floor বা int division)

    return 0;
}