
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> myvector;
    myvector.push_back(37);
    myvector.push_back(4);
    myvector.push_back(1);
    myvector.push_back(7);
    myvector.push_back(73);
    // Vector becomes 37, 4, 1, 7, 73
 
    cout << myvector.front()<<endl;  // 37
    cout << myvector.back();  // 73
    return 0;
}