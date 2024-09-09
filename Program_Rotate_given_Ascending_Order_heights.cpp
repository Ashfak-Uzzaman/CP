// The height must be in ascending order
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	int b[a[1] + 1];
	int j = 1;
	int tmp;
	int h = n;
	int prev = 0;
	for (int i = n; i > 0; --i)
	{
		tmp = a[i] - prev;
		while (tmp--)
		{
			b[j] = h;
			++j;
		}
		h--;
		prev=a[i];
	

	}
    for(int i=a[1];i>0;--i)cout<<b[i]<<' '; // Rotate 
    cout<<'\n';
	for(int i=1;i<=a[1];++i)cout<<b[i]<<' '; // Rotate and Mirror
    cout<<'\n';
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}

/*
4
4
6 4 2 1
5
5 4 3 2 1
5
5 5 5 3 3
5
9 4 4 4 4

-----------
4 3 2 2 1 1 
5 4 3 2 1 
5 5 5 3 3 
5 5 5 5 1 1 1 1 1 

*/