#include <bits/stdc++.h>
using namespace std; 

void solve(int a[], int n, int item) // O(n^3)
{
    bool found = false;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int l = j + 1, r = n - 1;
            while (l < r)
            {
                int sum = a[i] + a[j] + a[l] + a[r];
                if (sum == item)
                {
                    cout << a[i] << ' ' << a[j] << ' ' << a[l] << ' ' << a[r] << endl;
                    found = true;
                }

                if (sum > item)
                    r--;
                else
                    l++;
            }
        }
    }

    if (!found)
        cout << "Did not find any triplet" << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int item;
    cin >> item;

    solve(a, n, item);

    return 0;
}