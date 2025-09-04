#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    vector<int> a;
    for (int i = 0; i < n; i++)   // 1 1 1 2 3 3 4 5 6 6 6
    {
        cin >> x;
        if (i == 0 || a.back() != x)
        {
            a.push_back(x);
        }
    }

    for(auto u:a)  // 1 2 3 4 5 6
    {
        cout<<u<<" ";
    }


    return 0;
}