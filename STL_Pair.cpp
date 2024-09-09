#include <iostream>
#include <utility>
#include <vector>
#include <set>
using namespace std;



pair<int, string> f()
{
    return {23, "Pir_Hafizur"};
}

int main()
{
    pair<string,double>PAIR = make_pair("GeeksForGeeks is Best", 4.56);
    cout << PAIR.first << " " << PAIR.second << endl;

    pair<int, string> p(41, "GeeksForGeeks");

    cout << p.first << " " << p.second << endl;

    pair<int, string> p2;
    p2.first=10;
    p2.second="Taka";
    cout << p2.first << " " << p2.second << endl;


    

    vector<pair<string, int>> vp;

    vp.push_back(make_pair("Ashfak", 100));
    vp.push_back(make_pair("Jubayer Oni", 150));
    vp.push_back(make_pair("Nahid", 200));
    vp.push_back(make_pair("Apurbo", 250));

    cout << vp[0].first << " " << vp[0].second << "\n\n";

    // vector<pair<string, int>>::iterator it;

    auto it = vp.begin();

    for (it; it != vp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }


    pair<int, string> pf=f();

    cout << pf.first << " " << pf.second << "\n";


//Set pair:

    set<pair<int,string>>sp;
  
    sp.insert(make_pair(15,"Apple"));
    sp.insert(make_pair(10,"Banana"));
    sp.insert(make_pair(20,"Mango"));

    cout<<sp.begin()->first<<" "<<sp.begin()->second<<endl;

    for(auto u:sp)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }

    return 0;
}