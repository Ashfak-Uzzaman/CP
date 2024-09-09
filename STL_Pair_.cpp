#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    p = {2, "abc"};             // p = make_pair(2,"abc");
    pair<int, string> p1 = p;
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;

    p1.first = 3;

    cout << p.first << " " << p.second << endl;
    std::cout << p1.first << " " << p1.second << endl;

    return 0;
}



// std::

/*
#include <bits/stdc++.h>
int main()
{
    std::pair<int, double> p;
    p = {2, 20.5};
    std::pair<int, double> p1 = p;
    std::cout << p.first << " " << p.second << std::endl;
    std::cout << p1.first << " " << p1.second << std::endl;

    p1.first = 3;

    std::cout << p.first << " " << p.second << std::endl;
    std::cout << p1.first << " " << p1.second << std::endl;

    return 0;
}

*/