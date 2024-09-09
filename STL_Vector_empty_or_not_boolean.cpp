#include <iostream>
#include <vector> //v.empty() returns boolean value. If not empty returns 0, otherwise 1
using namespace std;

int main()
{
    /*vector<int> v = {5, 15, 10, 3, 13};

    cout << "size: " << v.size() << endl;
    cout << v.empty();      // returns boolean value. If not empty returns 0, otherwise 1
    puts("");

    v.clear();

    cout << "size: " << v.size() << endl;
    cout << v.empty();*/

    vector<int> vec(5); // built in 0 থাকবে। v1(10,-2) লিখলে -2 থাকতো

    vector<int> v1(3, 5);

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << "\t";
    puts("");
    cout << "size: " << v1.size() << endl;

    v1.resize(5); // আগে যদি size 10 থাকে এখন 5 হবে।
                  // size যদি বাড়াই তবে new গুলো 0 হবে।

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << "\t";
    puts("");
    cout << "size: " << v1.size() << endl;

    return 0;
}