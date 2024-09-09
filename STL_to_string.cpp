/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 458964569;
  
    string s = to_string(n);

    cout << s << endl;

    int l = s.size();
    cout << "size = " << l << endl;

    for (auto u : s)
        cout << u << '\n';

    cin >> n;
    s = to_string(n);

    cout << s << endl;

    l = s.size();
    cout << "size = " << l << endl;

    for (auto u : s)
        cout << u << '\n';

    return 0;
}
