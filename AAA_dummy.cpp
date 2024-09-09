/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define mem(a,val) memset(a, val, sizeof(a));
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define range(x,i,j) x.begin()+i,x.begin()+j
#define print(a) for(auto u:a)cout<<u<<' ';cout<<'\n';
#define Print(a) for(auto u:a)cout<<u.first<<' '<<u.second<<'\n';
#define Case(cs) cout<<"Case "<<cs<<": \n";++cs
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
typedef long long int ll; //  %lld
//const long long mod = 1000000007;
const int Max = 1e9 + 7;
// ctrl + k, ctrl + b




int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    file();
#endif
    int _ = 1, __ = 1;
    cin >> _;
up:
    while (_--)
    { // Case(__);
        ll n,m,b,s;cin>>n>>m;
        
ll mx=-1,x;
        for(int i=0;i<n;++i)
        {
            cin>>x;
            mx=max(x,mx);
        }

        
        char c;
        for(int i=0;i<m;++i)
        {
            cin>>c>>s>>b;

            if(mx>=s and mx<=b and c=='+')mx++;
            else if(mx>=s and mx<=b and c=='-')mx--;
            cout<<mx<<' ';
            
        }cout<<nl;



        



    }

    return 0;
}