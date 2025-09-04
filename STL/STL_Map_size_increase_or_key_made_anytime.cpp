/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <iostream>
#include<map>
using namespace std;
#define nl '\n'


int main()
{
    map<int, int> a;
    a[10] = 20;
    a[20] = 30;
    cout << a[10] + a[20] << nl;
    cout << a.size() << nl;
    cout << a[10] + a[30] << nl;
    cout << a.size() << nl;

    int x = a[100];
    cout << a.size() << nl;
    cout << a[100] << nl;
    cout << a.size() << nl;

    return 0;
}