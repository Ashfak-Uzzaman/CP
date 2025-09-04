/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<string> combination;
string a;

void f(string &s, int n, int i, int r)
{
    
    a.push_back(s[i]);
    for (int j = i+1; j < n; ++j)
    {
        a.push_back(s[j]);
        f(s,n,i+1,r);
        a.pop_back();
    }
   
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int r;
    cin >> r;
    f(s, n, 0, r);
    cout << combination.size() << nl;

    return 0;
}
