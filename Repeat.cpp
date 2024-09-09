#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, b;   /* n length এর একটা string যার প্রতি b পর্যন্ত substring এ unique char  থাকবে  */
    cin>>n>>b;
    for (int i = 0; i < n; ++i)
    {
        cout << char('a' + i % b);
    }
    cout << endl;

    return 0;
}