#include <iostream>
#include <queue>
using namespace std;

struct com {
     bool operator()(
        pair<int, int> &a,
        pair<int, int> &b) {
        // Change the comparison direction for ascending order
        return a.first >= b.first;
    }
};


int main()
{
    priority_queue<pair<int,int>>pq;

    pq.push({5,6});

    pq.push({4,2});

    pq.push({9,7});

    pq.push({8,11});

    while (!pq.empty())
    {
        cout<<pq.top().first<<' '<<pq.top().second<<endl;
        pq.pop();
    }cout<<endl;


    priority_queue<pair<int,int>,vector<pair<int, int>>, greater<pair<int, int>>> pq3;

    pq3.push({5,6});

    pq3.push({4,2});

    pq3.push({9,7});

    pq3.push({8,11});

    while (!pq3.empty())
    {
        cout<<pq3.top().first<<' '<<pq3.top().second<<endl;
        pq3.pop();
    }cout<<endl;



    priority_queue<pair<int,int>,vector<pair<int,int>>,com>pq1;  // Ascending : 1 2 3 4 5

    pq1.push({5,6});

    pq1.push({4,2});

    pq1.push({9,7});

    pq1.push({8,11});

    while (!pq1.empty())
    {
        cout<<pq1.top().first<<' '<<pq1.top().second<<endl;
        pq1.pop();
    }cout<<endl;



    auto cmp = [](pair<int,int>a, pair<int,int> b) { return a.first > b.first; }; // lambda function for comparator
    priority_queue<pair<int,int>,vector<pair<int,int>>, decltype(cmp)> pq2(cmp);

    pq2.push({5,6});

    pq2.push({4,2});

    pq2.push({9,7});

    pq2.push({8,11});

    while (!pq2.empty())
    {
        cout<<pq2.top().first<<' '<<pq2.top().second<<endl;
        pq2.pop();
    }

    return 0;
}
