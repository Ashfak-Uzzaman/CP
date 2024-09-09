#include <deque>
#include <iostream>
using namespace std;

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it<<' ';
    cout << '\n';
}

int main()
{
    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    cout << "The deque gquiz is : ";
    showdq(gquiz);

    cout << gquiz.at(2) << endl;
    cout << gquiz.size() << endl;
  

    cout << gquiz.front() << endl;
    cout << gquiz.back() << endl;

    gquiz.pop_front();
    showdq(gquiz);
    gquiz.pop_back();
    showdq(gquiz);

    while (!gquiz.empty())
    {
        cout << gquiz.back() << ' ';
        gquiz.pop_back();
    }
    cout << endl;

    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);

    while (!gquiz.empty())
    {
        cout << gquiz.front() << ' ';
        gquiz.pop_front();
    }

    return 0;
}