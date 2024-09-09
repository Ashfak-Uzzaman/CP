#include <iostream> // সেটে যেকোনো ক্রমে insert করলেও ছোট থেকে বড় সাজানো থাকবে
#include <set>      // একই value একাধিকবার insert করলেও একটাই থাকবে
#include <iterator>
using namespace std;

int main()
{
    set<int>seta;
    set<int> s = {-1, 10, 5, 10}; // কিন্তু এরা ছোট থেকে বড় সাজানো থাকবে। 10 দুইবার থাকবে না!!!

    cout << s.size() << endl; // O(1)      // s.size()=3

    set<int>::iterator it;

    it = s.begin();
    for (it; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    s.insert(8); // O(log N)
    s.insert(7);
    s.insert(9);
    s.insert(3);
    s.insert(8);
   

    s.erase(s.begin());  // -1 will erase

    it = s.begin();
    for (it; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    it = s.find(11); // 11 কিন্তু নাই  // O( log N )

    if (it == s.end())
    {
        cout << "\nHello\n"; // So Hello print হবে
    }

    it = s.find(9); // 9 এর iterator return হবে

    s.erase(it); // 9 কে erase করবে  // O( log N )

    s.erase(s.find(5)); // 5 কে erase করবে  O( log N )

    it = s.begin();
    for (it; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << s.count(5) << endl; // O( log N )  // 11 কিন্তু নাই, তাই 0  //bool
    cout << s.count(8) << endl; // O( log N )  // 8 আছে, তাই 1

    s.clear();                // O(N)
    cout << s.size() << endl; // s.size()=3
cout<<"\n";


    //for-each loop

    set<int> st = {-1, 10, 5, 10};

    for(auto u:st)
    {
        cout<<u<<endl;
    }



    return 0;
}
