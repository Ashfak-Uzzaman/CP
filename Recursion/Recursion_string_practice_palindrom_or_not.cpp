
#include <iostream>
#include <algorithm>
using namespace std;

bool palindrom_checker(string &str, int i, int l)
{
    if (i > l)
    {
        return true;
    }
    palindrom_checker(str, i + 1, l - 1);
    if (str[i] != str[l])
    {
        return false;
    }

    palindrom_checker(str, i + 1, l - 1);
}

int main()
{

    string s;

    cin >> s;

    bool x = palindrom_checker(s, 0, s.size() - 1);

    if (x == true)
    {
        cout << "PALINDROM !!!\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
