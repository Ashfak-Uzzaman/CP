#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {9, 5, 7, 2, 6};

    for (int u : v)
    {
        cout << u << " ";
    }
    puts("");

    for (int u : v)
    {
        u = u * 10;

        cout << u << " ";
    }
    puts("");

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    puts("");

    for (auto u : v) // auto লিখলে compiler automatically datatype select করবে
    {

        cout << u << " ";
    }

    return 0;
}