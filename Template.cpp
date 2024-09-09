#include<bits/stdc++.h>
using namespace std;
#define  endl              "\n"
#define  pow               powl
#define  sqrt              sqrtl
#define  log2              log2l
#define  log10             log10l
#define  F                 first
#define  S                 second
#define  pb                push_back
#define  ll                long long 
#define  ld                long double
#define  INF               LLONG_MAX
#define  MINF              LLONG_MIN
#define  int               long long 
#define  pll               pair<ll,ll>
#define  vi                vector<int>
#define  eb                emplace_back
#define  SORT(v)           sort(all(v))
#define  REVERSE(v)        reverse(all(v))
#define  difinbits(a,b)    setbits(a^b);
#define  trailzero(x)      __builtin_ctzll(x)
#define  accuracy(x)       setprecision(x)
#define  pt(x)             cout<<(x)<<endl
#define  ptw(x)            cout<<(x)<<" "
#define  no                cout<<"no"<<endl
#define  No                cout<<"No"<<endl
#define  NO                cout<<"NO"<<endl
#define  yes               cout<<"yes"<<endl
#define  YES               cout<<"YES"<<endl
#define  Yes               cout<<"Yes"<<endl
#define  fo(i,n)           for(ll i=0;i<n;i++)
#define  Fo(i,n)           for(ll i=1;i<=n;i++)
#define  rep(i,a,b)        for(ll i=a;i<=b;i++)
#define  per(i,b,a)        for(ll i=b;i>=a;i--)
#define  all(v)            v.begin(),v.end()
#define  FIND(m,v)         m.find(v)!=m.end()
#define  us                unordered_set<int>
#define  vvi               vector<vector<int>>
#define  MAXI(a)           *max_element(all(a))
#define  MINI(a)           *min_element(all(a))
#define  bs(a,x)           binary_search(all(a),x)
#define  AC(a,sum)         for(auto it:a) sum+=it;
#define  read(a)           for(auto &it:a) cin>>it;
#define  setbits(x)        __builtin_popcountll(x)
#define  RSORT(v)          sort(v.rbegin(),v.rend())
#define  ub(a,x)           upper_bound(all(a),x)-a.begin()
#define  lb(a,x)           lower_bound(all(a),x)-a.begin()
#define  mkuniq(a)         a.erase(unique(all(a)),a.end())
#define  PI                3.1415926535897932384626433832795
#define  to_upper(s)       transform(all(s),s.begin(),::toupper);
#define  to_lower(s)       transform(all(s),s.begin(),::tolower);
#define  readm(a)          for(auto &it:a)for(auto &j:it) cin>>j;
#define  print(a)          for(auto i:a) cout<<i<<" "; cout<<endl;
#define  printm(m)         for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
#define  printmtx(v)       for(auto i:v){for(auto j:i) cout<<j<<" ";cout<<"\n";}
#define  CODE_BY_KARAN     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  leftrotate(v,k)   rotate(v.begin(), v.begin()+k, v.end());
#define  rightrotate(v,k)  rotate(v.begin(), v.begin()+v.size()-k, v.end())
#define CheckBit(x,k) (x & (1LL << k))
#define SetBit(x,k)   (x |= (1LL << k))
#define ClearBit(x,k) (x &= ~(1LL << k))
#define Flip(x,k)     (x ^= (1LL << k))
#define MSB(mask)     63-__builtin_clzll(mask)
#define LSB(mask)     __builtin_ctzll(mask)
#define UNIQUE(x)     sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

/*-------------------------------------MATHEMATICAL FUNCTIONS--------------------------------------------*/
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

/*-------------------------------------COMPARATORS--------------------------------------------*/
// static bool compPBDC(pair<ll, ll>&a,pair<ll, ll>&b){if(a.F!=b.F) return a.F>b.F;else return a.S<b.S;}
// static bool compPCDB(pair<ll, ll>&a,pair<ll, ll>&b){if(a.F!=b.F) return a.F<b.F;else return a.S>b.S;}

/*--------------------------------------DEBUG FUNCTION--------------------------------------------*/
// #ifndef ONLINE_JUDGE
//     #include "debug.h"
// #else
//   #define deb(x...)
// #endif

const int mod = 1000000007; // 998244353;
const int N = 2*1e5 + 5;



void file() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class SegmentTree {
	ll *seg;
	ll *lazy;
	public :

	SegmentTree(ll n) {
		// Maximum Size Of Tree could be 4n only
		seg = new ll[4*n + 1];
		lazy = new ll[4*n + 1];
	}

	// Time Complexity Of Build : O(4N) == O(N) !!!
	void BuildTree(ll arr[], ll i, ll low, ll high) {
		if(low == high) {
			seg[i] = arr[low];
			return;
		}

		ll mid = low + (high - low) / 2;

		// Left Child
		BuildTree(arr, 2 * i + 1, low, mid);
		// Right Child
		BuildTree(arr, 2 * i + 2, mid + 1, high);
		
		// Sum Of Two
		seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
	}

	// Query Time Complexity : O(logN)
	ll query(ll ind, ll l, ll r, ll low, ll high) {

		// If Update is Remaining, First Update The Values
		if(lazy[ind] != 0) {

			seg[ind] += (high - low + 1) * lazy[ind];

			// If it is a leaf node, it will not have childrens
			if(low != high) {
				lazy[2 * ind + 1] += lazy[ind];
				lazy[2 * ind + 2] += lazy[ind];
			}
			lazy[ind] = 0;
		}

		// No Overlap
		// l r low high or low high l r
		if(high < l || low > r) return 0;

		// Complete Overlap
		// l low high r
		if(high <= r && low >= l) return seg[ind];

		// Partial Overlap
		ll mid = low + (high - low) / 2;

		ll left = query(2 * ind + 1, l, r, low, mid);
		ll right = query(2 * ind + 2, l, r, mid + 1, high);
		return left + right;
	}


	// Update Time Complexity : O(logN)
	void update(ll i, ll val, ll low, ll high, ll ind) {
		// If we found the required Node
		if(low == high) {
			seg[ind] = val;
			return;
		}

		ll mid = low + (high - low)/2;

		// If required node is left to mid, 
		// Move To Left Child Else Move To Right Child
		if(i <= mid) update(i, val, low, mid, 2 * ind + 1);
		else update(i, val, mid + 1, high, 2 * ind + 2);

		// Since, One Of The Child's Value is Updated
		// We have to find minimum again !!!
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}

	void updateRange(ll l, ll r, ll val, ll low, ll high, ll ind) {
		// First Update The Remaining Updates
		// Lazy Propagate To The Child
		if(lazy[ind] != 0) {

			seg[ind] += (high - low + 1) * lazy[ind];

			// If it is a leaf node, it will not have childrens
			if(low != high) {
				lazy[2 * ind + 1] += lazy[ind];
				lazy[2 * ind + 2] += lazy[ind];
			}
			lazy[ind] = 0;
		}

		// No Overlap
		// l r low high or low high l r
		if(high < l || low > r) return;

		// Complete Overlap
		// l low high r
		if(high <= r && low >= l) {
			seg[ind] += (high - low + 1) * val;
			if(low != high) {
				lazy[2 * ind + 1] += val;
				lazy[2 * ind + 2] += val;
			}
			return;
		}

		ll mid = low + (high - low)/2;

		// Partial Overlap ke case me left and right dono update karenge
		updateRange(l, r, val, low, mid, 2 * ind + 1);
		updateRange(l, r, val, mid + 1, high, 2 * ind + 2);

		// Since, One Of The Child's Value is Updated
		// We have to find minimum again !!!
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}
};

struct fenwick {

    vector<ll> fn;
    ll n;

    void init(ll n) {

        this->n = n + 1;
        fn.resize(this->n, 0);

    }

    void add(ll x, ll y) {

        x++;

        while (x < n) {
            fn[x] += y;
            x += (x & (-x));
        }
    }

    ll sum(ll x) {
        x++;

        ll ans = 0;
        while (x) {
            ans += fn[x];
            x -= (x & (-x));
        }

        return ans;
    }

    ll sum(ll l, ll r) {
        return sum(r) - sum(l - 1);
    }
};

class DisjointSet {
	vector<ll> rank, parent, size;

public:

	DisjointSet(ll n) {
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for(ll i = 1; i <= n; i++) parent[i] = i;
	}

	void unionByRank(ll x, ll y) {

		ll par_x = findPar(x);
		ll par_y = findPar(y);

		if(par_x == par_y) return;

		if(rank[par_x] < rank[par_y]) {
			parent[par_x] = par_y;
		} else if(rank[par_y] < rank[par_x]) {
			parent[par_y] = par_x;
		} else {
			parent[par_x] = par_y;
			rank[par_y]++;
		}
	}

	void unionBySize(ll x, ll y) {

		ll par_x = findPar(x);
		ll par_y = findPar(y);

		if(par_x == par_y) return;

		if(size[par_x] < size[par_y]) {
			parent[par_x] = par_y;
			size[par_y] += size[par_x];
		} else {
			parent[par_y] = par_x;
			size[par_x] += size[par_y];
		}
	}

	ll findPar(ll x) {

		if(parent[x] == x) return x;

		return parent[x] = findPar(parent[x]);

	}

};

ll binpow(ll a,ll b) {
    ll ans = 1;
    while(b > 0) {
        if((b & 1) == 1) ans *= a;
        a *= a;
        b = b >> 1;
    }
    return ans;
}

ll binpowmod(ll a,ll b) {
    ll ans = 1;
    while(b > 0) {
        if((b & 1) == 1) {
        	ans *= a;
        	ans %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return ans;
}


ll gcd(ll a,ll b) {
	if(b == 0) return a;
	return gcd(b, a % b);
}

ll lcm(ll a,ll b) {
	return (a / gcd(a,b)) * b;
}

const ll MAX = 2e5 + 7;
vector<ll> fact(MAX);
 
ll add(ll a, ll b) {
	return (a + b) % mod;
}
 
ll sub(ll a, ll b) {
	return ((a - b) % mod + mod) % mod;
}
 
ll mult(ll a, ll b) {
	return ((a * b) % mod);
}

ll inv(ll a) {
	return binpowmod(a, mod - 2);
}
 
ll divide(ll a, ll b) {
	return mult(a, inv(b));
}
 
ll nCr(ll n, ll r) {
	if(n < r) return 0;
	return divide(fact[n], mult(fact[r], fact[n - r]));
}
 
void preFactorial() {
	fact[0] = 1;
	for(ll i = 1; i < MAX; i++) fact[i] = mult(i, fact[i - 1]);
}

bool isVowel(char c) {
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
	return false;
}

bool isSame(ll n, ll arr[]) {
	for(ll i = 0; i < n; i++) {
		if(arr[i] != arr[0]) return false;
	}
	return true;
}

bool isSame(ll n, vector<ll> &arr) {
	for(ll i = 0; i < n; i++) {
		if(arr[i] != arr[0]) return false;
	}
	return true;
}

bool isSorted(ll n, ll arr[]) {
	for(ll i = 1; i < n; i++) {
		if(arr[i] < arr[i - 1]) return false;
	}
	return true;
}

bool isSorted(ll n, vector<ll> &arr) {
	for(ll i = 1; i < n; i++) {
		if(arr[i] < arr[i - 1]) return false;
	}
	return true;
}

void inputArr(ll n, ll arr[]) {
	for(ll i = 0; i < n; i++) cin >> arr[i];
}

void inputArr(ll n, vector<ll> &arr) {
	ll x;
	for(ll i = 0; i < n; i++) {
		cin >> x;
		arr.push_back(x);
	}
}

void printArr(ll n, ll arr[]) {
	for(ll i = 0; i < n; i++) cout << arr[i] << " ";
	cout << '\n';
}

void printArr(ll n, vector<ll> &arr) {
	for(ll i = 0; i < n; i++) cout << arr[i] << " ";
	cout << '\n';
}

ll sumOfArr(ll n, ll arr[]) {
	ll ans = 0;
	for(ll i = 0; i < n; i++) ans += arr[i];
	return ans;
}

ll sumOfArr(ll n, vector<ll> &arr) {
	ll ans = 0;
	for(ll i = 0; i < n; i++) ans += arr[i];
	return ans;
}

bool isPrime(ll n) {
	if(n == 1) return false;
	for(ll i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return false;
	}
	return true;
}

ll countSetBits(ll n) {
	ll ans = 0;
	while(n) {
		ans++;
		n = n & (n - 1);
	}
	return ans;
}

vector<ll> primeFactorization(ll n) {
	vector<ll> factors;
	for(ll i = 2; i * i <= n; i++) {
		ll cnt = 0; 
		while(n % i == 0) {
			cnt++;
			n /= i;
			factors.push_back(i);
		}
	}
	if(n > 1) factors.push_back(n);
	return factors;
}

bool isPalindrome(string s) {
	ll i = 0;
	ll j = s.size() - 1;
	while(i <= j) {
		if(s[i] != s[j]) return false;
		i++;
		j--;
	}
	return true;
}

// ----------- Code Starts Here ----------- //

void solve() 
{
	

}

int main()
{
	// file();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}






