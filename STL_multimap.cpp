#include <iostream>
#include <map> 
/*std::multimap is typically implemented as a balanced binary search tree (e.g., a red-black tree) 
where each operation takes O(log n) time.
*/ 

using namespace std;

int main()
{// multimap এ একই key একাধিকবার store হতে পারে কিন্তু শুধু map এ তা হয় না

    multimap<string, int> m; // Red-Black Tree

    m.insert(make_pair("Najmul", 1015));      //      Ashfak 1041         // insertion = O(logN) 
    m.insert(make_pair("Nahid", 1042));       //      Ashfak 1
    m.insert(make_pair("Ashfak", 1041));      //      Minar 1023
    m.insert(make_pair("Shamim", 1027));      //      Najmul 1015
    m.insert(make_pair("Minar", 1023));       //      Najmul 15
    m.insert(make_pair("Najmul", 15));        //      Polash 1042
    m.insert(pair<string, int>("Ashfak", 1)); //      Shamim 1027

    multimap<string, int>::iterator it;

    it = m.begin();

    for (it; it != m.end(); ++it)
    {
        cout << it->first << " " << it->second << "\n";
    }
    /*
                    Ashfak 1041
                    Ashfak 1
                    Minar 1023
                    Najmul 1015
                    Najmul 15
                    Polash 1042
                    Shamim 1027
    */

    auto itFind = m.find("Ashfak"); // O(log n)   
// This is because, internally, std::multimap is typically implemented as a balanced binary search tree (e.g., a red-black tree) 
// where each operation takes O(log n) time.
    if (itFind != m.end())
    {
        cout << "Element found: " <<itFind->second<< endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    if (m.find("JubayerAhmadOni") != m.end())
    {
        cout << "Element found." << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
