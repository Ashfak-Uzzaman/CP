//  *min_element (v.begin(), v.end());  // Time Complexity: O(N)

//  *max_element (v.begin(), v.end());

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Get the vector
    vector<int> a = {1, 45, 54, 71, 76, 12};

    

    // Find the max element
    cout << *max_element(a.begin(), a.end())<<endl;  // Time Complexity: O(N)

    // Find the min element
    cout << *min_element(a.begin(), a.end())<<endl; // Time Complexity: O(N)

    return 0;
}