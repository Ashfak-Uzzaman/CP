#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n ,m;  // row and column
    cout<<"Enter n and m : ";
    cin>>n>>m;

    vector<vector<int>> perm(n, vector<int>(m));

    cout<<"Enter values in the 2D vector :\n";

    // Take input for each element of perm
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> perm[i][j];
        }
    }

    // Print each element of perm
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << perm[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
