/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define mem(a,val) memset(a, val, sizeof(a));
#define print(a) for(auto u:a)cout<<u<<' ';cout<<'\n';
#define Print(a) for(auto u:a)cout<<u.first<<' '<<u.second<<'\n';
#define Case(cs) cout<<"Case "<<cs<<": \n";++cs
typedef long long int ll; //  %lld
//const long long mod = 1000000007;
//const int Max = 1e5 + 7;


void solve()
{
    int n,k;cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }

    if(k>=3)cout<<0<<nl;
    else if(k==2)
    {
        sort(a,a+n);
        ll ans=a[0];
        ll dif;
        for(int i=0;i<n-1;++i)
        {
           for(int j=i+1;j<n;++j)
           {
            dif=abs(a[i]-a[j]);
            ans=min(ans,dif);

            int idx=lower_bound(a,a+n,dif)-a;

            if(idx<n)ans=min(ans,a[idx]-dif);
            if(idx)ans=min(ans,dif-a[idx-1]);
           }
            
        }
        cout<<ans<<nl;
    }
    else
    {
        sort(a,a+n);
        ll ans=a[0];
        for(int i=1;i<n;i++){
            ans=min(ans,a[i]-a[i-1]);
        }
        cout<<ans<<nl;
    }
    
    
    



}


int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,casea=1;
    cin>>t;
    while (t--){//Case(casea);
        solve();}

    return 0;
}
