#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;
    set<int>::iterator it;

    myset = {10, 20, 40, 30, 5};

    for (it = myset.begin(); it != myset.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    it = myset.find(30);
    myset.erase(*it); // erasing by iterator

    for (it = myset.begin(); it != myset.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    myset.erase(myset.begin());

    for (it = myset.begin(); it != myset.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    myset.erase(prev(myset.end()));

    for (it = myset.begin(); it != myset.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    myset.erase(prev(myset.end()));

    for (it = myset.begin(); it != myset.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}