#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 4, 1, 5, 4, 2, 3, 7, 3};

    sort(v.begin(), v.end()); // O(nlog2n)  // may be 2 base log n

    int unq = unique(v.begin(), v.end()) - v.begin(); // O(n)

 // Total O(nlogn)   

    cout << "unique: " << unq << endl;
    
    cout << v.size() << endl;
    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");

    printf("Unique values:\n");

    for (int i = 0; i < unq; i++)
    {
        cout << v[i] << " ";
    }
    puts("");

    return 0;
}
