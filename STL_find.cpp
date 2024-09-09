#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 5, 8, 9, 13, 17, 18, 22, 27};

    vector<int>::iterator it;

    int x;
    cin >> x;

    it = find(a.begin(), a.end(), x); // Time Complexity: O(n)

    if (it == a.end())
        cout << "NOT FOUND\n";
    else
        cout << "Found at position: " << (it - a.begin()) << endl;

    set<int> st = {2, 100, 4, 17, 6, 3}; // it will remain sorted
    // for(auto u:st)cout<<u<<' ';cout<<endl;

    set<int>::iterator pos;

    pos = find(st.begin(), st.end(), x);  // O(log n) 

    if (pos == st.end())
        cout << "NOT FOUND\n";
    else
        cout << "Found at position : "<< distance(st.begin(), pos) << endl;   
                                // Here  (pos - st.begin())  will not work

    return 0;
}