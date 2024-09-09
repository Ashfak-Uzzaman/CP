#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> mylist;
    list<int>::iterator it;

    mylist.push_back(50);
    mylist.push_back(40);
    mylist.push_front(20);
    mylist.push_back(60);
    mylist.push_front(35); // list এর সামনে (বামে) push করলাম
    mylist.push_back(45);  // list এর পিছনে(ডানে) push করলাম

    it = mylist.begin();

    cout << "size: " << mylist.size() << endl;
    for (it; it != mylist.end(); it++)
    {
        cout << *it << "\t";
    }

    mylist.push_back(37);
    mylist.push_front(50);
    
    it = mylist.begin();

    puts("");
    cout << "size: " << mylist.size() << endl;
    for (it; it != mylist.end(); it++)
    {
        cout << *it << "\t";
    }

    mylist.reverse();

    it = mylist.begin();

    puts("");
    for (it; it != mylist.end(); it++)
    {
        cout << *it << "\t";
    }

    list<int>mylist2(5,-2);
    list<int>::iterator it2;
    it2=mylist2.begin();

    puts("\n");
    cout<<"size: "<<mylist2.size()<<endl;
    for (it2; it2 != mylist2.end(); it2++)
    {
        cout << *it2 << "\t";
    }puts("");

    mylist2.clear();   //mylist2.size() = 0
    cout<<mylist2.size();  




    return 0;
}