#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(10); // built in 0 থাকবে। v1(10,-2) লিখলে -2 থাকতো

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    puts("");
    cout << "size: " << v1.size() << endl;

    vector<int> v(5, -2); // মানে এই vector এর size 5, আর সবগুলা element এর value -2

    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // এখন push_back()  করার মাধ্যমে vector এর size বাড়াবো

    v.push_back(5);

    puts("");
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    v[2] = 6;
    v.push_back(9);

    puts("");
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    

    return 0;
}