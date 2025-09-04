/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
// https://codeforces.com/problemset/problem/1917/B
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

#define all(x) x.begin(),x.end()
#define print(a) for(auto u:a)cout<<u<<'\n';cout<<'\n';


set<string>m;
void f(string s)
{
    if(s.size()<2)
    {
        m.insert(s);
        return;
    }
    char t=s.back();
    string tt=s;
    reverse(all(tt));
    m.insert(tt);
    s.pop_back();
    f(s);
    s.pop_back();
    s.push_back(t);
    f(s);


}


void solve()
{
    string s;
    cin>>s;
    reverse(all(s));
    f(s);
    cout<<m.size()<<nl;

    print(m);cout<<nl<<nl;
   
    m.clear();




}


int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1,casea=1;
    cin>>t;
    while (t--){//Case(casea);
        solve();}

    return 0;
}
