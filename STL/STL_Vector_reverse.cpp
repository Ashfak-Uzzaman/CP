#include <iostream>
#include <vector>
#include <algorithm> //reverse এর জন্য O(n)
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(9);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }

    reverse(v.begin(), v.end()); // O(n)             

    reverse(v.begin() + 1, v.begin() + 4); // index 1 থেকে index 4 এর আগ পর্যন্ত

    puts("");
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }

    return 0;
}