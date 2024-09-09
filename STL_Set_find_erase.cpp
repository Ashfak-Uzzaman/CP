#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;
    set<int>::iterator it;

    myset = {10, 20, 30};

    cout << "Before erasing the element: \n";
    for (it = myset.begin(); it != myset.end(); ++it)
        cout << *it << '\n';

    it = myset.find('b');
    myset.erase(*it); // erasing by iterator

    cout << "\nAfter erasing the element: \n";
    for (it = myset.begin(); it != myset.end(); ++it)
        cout << *it << '\n';

    return 0;
}