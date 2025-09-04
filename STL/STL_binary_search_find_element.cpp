#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 5;

    // Perform binary search using std::binary_search
    bool found = std::binary_search(arr.begin(), arr.end(), target);
    if (found) {
        int index = std::distance(arr.begin(), std::lower_bound(arr.begin(), arr.end(), target));
        cout << "Target found at index " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
