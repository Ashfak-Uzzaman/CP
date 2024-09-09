#include <iostream> 
#include <set>     
#include <iterator>
using namespace std;

int main()
{

    set<string> s;
    set<string>::iterator it;   // it++,it--,++it,--it  these all are valid and work in O(logN)

    s.insert("Ashfak");  // O(log N)
    s.insert("Oni");
    s.insert("Nahid");
 

    pair<set<string>::iterator,bool>p;   //  s.insert() একটি pair return করে, একটা iterator আর একটা bool

    p=s.insert("Nahid");
    cout<<"\nHlw "<<*p.first<<endl;

    if(p.second==false)
    {
        cout<<"Cann't insert\n";
    }
    else{
        cout<<"inserted\n";
    }

    p=s.insert("Apurbo");

    if(p.second==false)
    {
        cout<<"Cann't insert\n";
    }
    else{
        cout<<"inserted\n";
    }

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }cout<<endl;






    // set<int> s;
    // set<int>::iterator it;
    // s.insert(50);
    // s.insert(45);
    // s.insert(40);
    // s.insert(35);

    

    return 0;
}
