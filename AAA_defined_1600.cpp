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
//typedef long long int ll; //  %lld
//const long long mod = 1000000007;
//const int Max = 1e5 + 7;
// ctrl + k, ctrl + b


class Solution {
public:
    string convert(string s, int numRows) {
        
        int n=s.size();
        numRows=min(n,numRows);
        string a[numRows];
        int j=0,mul=1;
        for(int i=0;i<n;++i)
        {
            a[j].push_back(s[i]);

            if(j==numRows-1)mul=-1;
            else if(j==0)mul=1;
            j+=mul;
        }

        string ans;
        for(int i=0;i<numRows;++i)
        {
            ans.push_back(a[i]);
        }

        return ans;
        
    }
};



int main() {
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
    
    
    //vector<int> nums = {7,6,4,3,1};
    //print(nums);
    string nums="S";
    Solution solution;
    int ans = solution.convert(nums,4);
    //vector<int> ans = solution.removeDuplicates(nums);
    cout<<ans<<endl;
    

    return 0;
}
