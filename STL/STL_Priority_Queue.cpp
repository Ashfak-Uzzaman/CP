#include <iostream>
#include <queue>
using namespace std;

struct com {
    bool operator()(const int& a, const int& b) {
        // Change the comparison direction for ascending order
        return a > b;
    }
};


int main()
{
    priority_queue<int> pq;   // Descending : 5 4 3 2 1 
    priority_queue<int,vector<int>,com>pqa;  // Ascending : 1 2 3 4 5

    pq.push(3); // O(logN)
    pq.push(2);
    pq.push(1);
    pq.push(10);
    pq.push(5);

    cout << pq.top() << endl; // o(1)

    cout << pq.size() << endl; // o(1)

    if (pq.empty()) // o(1)
    {
        cout << "Queue is empty\n";
    }

    pq.pop(); // O(logn)
    cout<<pq.top()<<endl;

    priority_queue<int> pq1;
    pq1.push(103); 
    pq1.push(101);
    pq1.push(110);
    pq1.push(105);

    pq.swap(pq1); // O(1)

    pq.top(); //--> 110

    // Print
    while(!pq.empty())
    {
        cout<<pq.top()<<' ';
        pq.pop();
    }

    return 0;
}
