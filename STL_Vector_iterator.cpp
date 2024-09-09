#include <iostream>
#include <vector>
#include <iterator>    // অনেকটা pointer এর মতো, vector এর pointer.
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it; // অনেকটা pointer এর মতো, vector এর pointer

    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }

    it = v.begin();  //এই iterator টা v.begin() বা 0th index এর দিকে point করে আছে

    cout << *it << endl;

    it++;
    cout << *it << endl;
    *it = 100;
    cout << *it << endl;
    puts("");

    for (it = v.begin(); it != v.end(); it++)  // v.end() হচ্ছে last যে element আছে তার পরের ঘরকে mean করে
    {
        cout <<*it<<"\t";
    }puts("");
    cout <<*it;
    //it++;
    puts("");
    cout <<*it;



    return 0;
}

/*Vector iterators are used to point to the memory address of a vector element. In some ways, they act like pointers 
in C++ */