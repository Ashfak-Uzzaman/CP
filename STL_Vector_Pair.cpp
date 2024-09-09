#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

bool sort_by_second(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    pair<int,string>p(41,"GeeksForGeeks");

    cout<<p.first<<" "<<p.second<<endl;;

    vector<pair<string,int>>vp;

    vp.push_back(make_pair("Ashfak",100));

    cout<<vp[0].first<<" "<<vp[0].second<<endl;


    vp.push_back(make_pair("Jubayer Oni",150));
    vp.push_back(make_pair("Nahid",200));
    vp.push_back(make_pair("Apurbo",250));

    vector<pair<string,int>>::iterator it;

    it=vp.begin();

    for(it;it!=vp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }


/*    Sorting a Vector Pair     */

    vector<pair<int, int>> pairs = {{3, 4}, {4, 2}, {5, 6}};

    sort(pairs.begin(), pairs.end(), sort_by_second);

    // Print the sorted key-value pairs
    for (auto p : pairs)
    {
        cout << p.first << " : " << p.second << endl;
    }

    // copying into aoher vector
    vector<pair<int, int>> pairs2(pairs.begin(), pairs.end());



  






    


    return 0;
}