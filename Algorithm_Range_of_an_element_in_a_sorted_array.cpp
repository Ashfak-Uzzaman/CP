#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &a, int x)
    {
        if (a.size() == 0)
            return {-1, -1};
        auto lowerit = lower_bound(a.begin(), a.end(), x);
        if (lowerit == a.end())
            return {-1, -1};

        int l = lowerit - a.begin();
        int r = (upper_bound(a.begin(), a.end(), x) - a.begin()) - 1;
        if (a[l] != x)
            return {-1, -1};
        else
            return {l, r};
    }
};

int main()
{
    //        		     0  1  2  3  4  5  6  7  8  9 10 11  12  13  14  15  16  17
    // vector<int> a = {1, 2, 3, 4, 4, 4, 4, 4, 6, 9, 9, 15, 24, 24, 24, 24, 56, 67};
    vector<int> a = {6, 9, 11, 14, 16, 19, 22, 25};
    int x;
    cin >> x;

    Solution p;
    vector<int> ans = p.searchRange(a, x);

    for (auto u : ans)
        cout << u << ' ';
    cout << '\n';

    return 0;
}