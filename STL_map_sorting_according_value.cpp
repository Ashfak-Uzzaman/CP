#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Comparison function to sort pairs by value
bool sortByValue(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}


int main()
{
    // Create a map with some key-value pairs
    map<int, int> myMap = {{1, 5}, {2, 3}, {3, 9}, {4, 1}, {5, 7}};

    myMap[2] = 100;

    // Create a vector of pairs
    vector<pair<int, int>> vec(myMap.begin(), myMap.end());

    // Sort the vector by value
    sort(vec.begin(), vec.end(), sortByValue);

    // Print the sorted key-value pairs
    for (auto p : vec)
    {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}