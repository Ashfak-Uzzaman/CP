#include<iostream>
#include<utility>
#include<set>
using namespace std;


int main()
{
    //Set pair:

    set<pair<int,string>>sp;
  
    sp.insert(make_pair(15,"Apple"));
    sp.insert(make_pair(10,"Banana"));
    sp.insert(make_pair(20,"Mango"));

    cout<<sp.begin()->first<<" "<<sp.begin()->second<<endl;  // smallest

    cout<<sp.rbegin()->first<<" "<<sp.rbegin()->second<<endl;  // largest

    return 0;


}