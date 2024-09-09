#include <bits/stdc++.h>
using namespace std;
/*
0   (0, 1, 2)   ->    0   -> x
1   (0, 1, 2)   ->    1   -> 1
2   (0, 1, 2)   ->   10   -> 2
3   (0, 1, 2)   ->   11   -> 1, 2
4   (0, 1, 2)   ->  100   -> 3
5   (0, 1, 2)   ->  101   -> 1, 3
6   (0, 1, 2)   ->  110   -> 2, 3
7   (0, 1, 2)   ->  111   -> 1, 2, 3

*/



vector<vector<int>> Subset(vector<int> &nums)  // O(n * 2^n)
{
    int n = nums.size();
    int subset_ct = 1 << n;  // 2^n --> number_of_subset
    vector<vector<int>> subsets;
    for (int mask = 0; mask < subset_ct; ++mask)  //mask এর জন্য bit combinition দরকার so max bit এর combinition যতটি 
                                                                                      // mask এর combinition ততটি
                                                                                      // যা number of subset
    {
        vector<int> subset;
        for (int i = 0; i < n; ++i) // প্রতিবার mask (mask হবে 0 থেকে 2^n -1 পর্যন্ত) এ পর্যন্ত কয়টা সেট আছে দেখতে হবে
        {
            if (mask & (1 << i))
            {
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }

    return subsets;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    auto all_subsets = Subset(nums);

    for (auto subset : all_subsets)
    {
        for (auto Element : subset)
        {
            cout << Element << ' ';
        }
        cout << '\n';
    }

    return 0;
}