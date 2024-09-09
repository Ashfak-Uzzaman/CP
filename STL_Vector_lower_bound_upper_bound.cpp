#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 5, 8, 9, 12};

    // vector<int>::iterator it;

    auto it = lower_bound(v.begin(), v.end(), 5); // 5 এর itterator return দিবে

    cout << *it << endl; // 5

    
    it = lower_bound(v.begin(), v.end(), 6); // 8 এর itterator return দিবে

    cout << *it << endl; // 8

    
    cout << distance(v.begin(), it) << endl; // 8 এর index return দিবে : 3

    it = lower_bound(v.begin(), v.end(), 13);

    
    if (it == v.end())
    {
        cout << "Out of boundary\n";
    }

    it = upper_bound(v.begin(), v.end(), 8); // immidiate পরের টার itterator // 9 এর itterator return দিবে
                                             
    cout << *it << endl; // 9


    it = upper_bound(v.begin(), v.end(), 6);
    
    cout << *it << endl; // 8


     it = upper_bound(v.begin(), v.end(), 43);

    
    // if (it == v.end())
    // {
    //     cout << "Not found\n\n";
    // }

    cout<<(it!=v.end()?to_string(*it):"Not found");

// string result = (marks >= 40) ? "passed" : "failed";

    return 0;
}
