#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {96, 54, 78, 27, 63, 37, 81, 43, 18, 89};

    cout << v.back() << endl; // last index এর value print করবে।
    cout << v.front() << endl;
    
    cout << *v.begin() << endl;   // ১ম index এর value print করবে।
    //  cout<<*v.end();          /*it will give gurbage because it is the 6+1 th index   */

    swap(v[0],v[3]);
    cout << v.size() << endl;
    cout << v.back() << endl;

    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");

    v.erase(v.begin()+4);   // v.erase(v.begin()+indx);

    cout << v.size() << endl;
    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");    


    return 0;
}