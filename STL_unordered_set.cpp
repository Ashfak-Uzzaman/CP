#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // Declare an unordered_set of integers
    unordered_set<int> myHashSet;

    myHashSet.insert(20);
    myHashSet.insert(40);
    myHashSet.insert(30);
    myHashSet.insert(10);
    myHashSet.insert(40);
    // 10 30 40 20 
    
    for (auto element : myHashSet)   // 10 30 40 20 
    {
        cout << element << " ";
    }
    cout << '\n';

    myHashSet.erase(20);  // erasing

    // Check if an element is present in the set
    if (myHashSet.find(20) != myHashSet.end())
    {
        cout << "Element is present in the set." << endl;
    }
    else
    {
        cout << "Element is not present in the set." << endl;
    }

    for (auto element : myHashSet)
    {
        cout << element << " ";
    }
    cout << '\n';

    return 0;
}