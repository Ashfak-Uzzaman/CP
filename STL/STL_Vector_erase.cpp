#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {96, 54, 78, 27, 63, 37, 81, 43, 18, 89},v2;
    v2=v;
    v2.erase(v2.begin()+2,v2.begin()+5);    //index 2 থেকে 5 এর আগ পর্যন্ত erase হয়ে যাবে।
    for(auto u:v2){cout<<u<<" ";}puts("");

    cout << v.back() << endl;

    cout << *v.begin() << endl;
//  cout<<*v.end();             /*it will give gurbage because it is the 6+1 th index   */

    v.pop_back(); //   O(1)  একটার জন্য, n টার জন্য O(n)
    cout << v.size() << endl;
    cout << v.back() << endl;

    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");

    v.erase(v.begin()); // O(n)

    cout << v.size() << endl;
    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");

    /* We want to erase index 2  */

    v.erase(v.begin() + 2);

    cout << v.size() << endl;
    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");

    /* We want to erase index 1  */

    v.erase(v.begin() + 1);

    cout << v.size() << endl;
    for (auto u : v)
    {
        cout << u << " ";
    }
    puts("");

    /*  Now we want to erase one by one */

    while (!v.empty()) // এইভাবে বারবার begin() থেকে erase() করলে হবে O(n^2)
    {
        v.erase(v.begin());
        cout << "size: " << v.size() << endl;
    }
    puts("");

    /*আমরা কোনো vector begin থেকে erase করে করে যাওয়ার দরকার হলে আমরা vector কে reverse করে pop_end() করবো */

    v = {96, 54, 78, 27, 63, 37, 81, 43, 18, 89};
    
    reverse(v.begin(), v.end());

    cout << "size: " << v.size() << endl;
    while (!v.empty())
    {
        v.pop_back();
        cout << "size: " << v.size() << endl;
    }

    return 0;
}