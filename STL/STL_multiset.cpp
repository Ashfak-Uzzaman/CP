#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s = {10, 5, 10}; // কিন্তু এরা ছোট থেকে বড় সাজানো থাকবে

    multiset<int>::iterator it;

    s.insert(8);
    s.insert(7);
    s.insert(9);
    s.insert(9);
    s.insert(11);
    s.insert(8);
    s.insert(11);

    it = s.begin();
    for (it; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    s.insert(8);
    s.insert(7);
    s.insert(9);
    s.insert(9);
    s.insert(11);
    s.insert(8);
    s.insert(11);

    it = --s.end();  // last index এ point করছে

//Before erasing
    for (auto u:s)    // 5 7 7 8 8 8 8 9 9 9 9 10 10 11 11 11 11 
    {
        cout << u << " ";
    }
    cout << endl;

    s.erase(it);  // শুধু itterator টা যাকে point করছে তাকে erase করবে।

    for (auto u:s)    // 5 7 7 8 8 8 8 9 9 9 9 10 10 11 11 11
    {
        cout << u << " ";
    }
    cout << endl;

    s.erase(*it);  //যতগুলো *it vaue আছে সবাইকে erase করবে।

     for (auto u:s)  // 5 7 7 8 8 8 8 9 9 9 9 10 10 
    {
        cout << u << " ";
    }
    cout << endl;

    s.clear();  // s.size() = 0
    cout<<"After clear size : "<<s.size()<<endl;  




    

    return 0;
}
