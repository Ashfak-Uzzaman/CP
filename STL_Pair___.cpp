#include <iostream>
#include <utility>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    pair<int, int> p[5];

    p[0] = make_pair(2, 5);
    p[1] = make_pair(1, 5);
    p[2] = make_pair(1, 0);
    p[3] = make_pair(3, 2);
    p[4] = make_pair(2, 5);

    sort(p,p+5);

    for(int i=0;i<5;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }


    vector<pair<int, string>> pr;

    pr.push_back(make_pair(2, "Chacha"));
    pr.push_back(make_pair(2, "Ashfak"));
    pr.push_back(make_pair(4, "Abba"));
    pr.push_back(make_pair(6, "Amma"));
    pr.push_back(make_pair(2, "Apurbo"));
   
  
    sort(pr.rbegin(), pr.rend());  // descending order 
                                  //  sort(pr.begin(), pr.end());  // ascending order 
    int i=0;
    for(auto it=pr.begin();it!=pr.end();it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
        cout<<pr[i].first<<" "<<pr[i].second<<"\n\n";
        i++;
    }
    return 0;
}