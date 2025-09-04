#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5,-3);  // 5 টা -3 vector এ আছে. -3 না দিলে 0 থাকবে।

    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    puts("");

    v.clear();      // এখন v.size()=0
    
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    puts("");
    return 0;
}






