#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    printf("\nPush numbers in vector & enter 0 to stop:\n");
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        v.push_back(n);
    }

    cout << "size: " << v.size() << endl;

    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");

    return 0;
}
