#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

bool sort_by_second(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
/*    Sorting a Vector Pair     */

    vector<pair<int, int>> pairs = {{3, 4}, {4, 2}, {5, 6}};

    sort(pairs.begin(), pairs.end(), sort_by_second);

    // Print the sorted key-value pairs
    for (auto p : pairs)
    {
        cout << p.first << " : " << p.second << endl;
    }


    return 0;
}