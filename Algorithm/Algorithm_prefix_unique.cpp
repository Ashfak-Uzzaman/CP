#include <iostream>
#include <string>
#include <vector>
#include <set> // set contains only unique values
using namespace std;

/*Find the number of unique elements from 1st to i-th position   */

int main()
{
    string s;
    cin >> s;

    set<int> st;

    vector<int> a;

    for (auto u : s)
    {
        st.insert(u);
        a.push_back(st.size());
    }

    /*Printing Unique Elements*/
    for (auto u : st)
    {
        cout << u << " ";
    }
    cout << '\n';

    int i = 0;

    for (auto u : a)
    {
        cout << "From index 0-th to " << i << "-th unique :" << u << endl;
        i++;
    }

    cout << "\nTotal Unique Elements: " << st.size() << endl;

    return 0;
}