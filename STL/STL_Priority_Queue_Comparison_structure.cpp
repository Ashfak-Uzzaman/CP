#include <iostream>
#include <queue>
using namespace std;

struct com {
    bool operator()(int& a, int& b) {
        // Change the comparison direction for ascending order
        return a > b;
    }
};


int main()
{
    auto cmp = [](int a, int b) { return a > b; }; // lambda function for comparator
    priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
    
    priority_queue<int,vector<int>,com>pq1;  // Ascending : 1 2 3 4 5
    // দুইভাবেই করা যায়

    pq.push(3); // O(logN)
    pq.push(2);
    pq.push(1);
    pq.push(10);
    pq.push(5);

   

    // Print
    while(!pq.empty())
    {
        cout<<pq.top()<<' ';
        pq.pop();
    }

    return 0;
}
